use ac_library::{Monoid, Segtree};
use proconio::input;

fn main() {
    input! {
        n: usize,
        q: usize,
        a: [usize; n]
    }
    let mut seg: Segtree<Mono> = Segtree::new(n);
    for i in 0..n {
        seg.set(i, a[i]);
    }
    for _ in 0..q {
        input! {
            t:usize,
            x:usize,
            y:usize
        }
        match t {
            0 => {
                seg.set(x, seg.get(x) + y);
            }
            1 => {
                println!("{}", seg.prod(x..y));
            }
            _ => unreachable!(),
        }
    }
}

struct Mono;

impl Monoid for Mono {
    type S = usize;
    fn identity() -> Self::S {
        0
    }
    fn binary_operation(a: &Self::S, b: &Self::S) -> Self::S {
        a + b
    }
}
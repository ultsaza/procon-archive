use proconio::{input, marker::Usize1};
use ac_library::Dsu;

fn main() {
    input! {
        n: usize,
        m: usize,
        ab: [(Usize1, Usize1); m],
    }
    let mut g: Vec<Vec<usize>> = vec![vec![];n];
    let mut uf = Dsu::new(n);
    for (a, b) in ab {
        g[a].push(b);
        g[b].push(a);
        if uf.same(a,b) {
            println!("No");
            return;
        }
        uf.merge(a,b);
    }
    for i in 0..n {
        if g[i].len() > 2 {
            println!("No");
            return;
        }
    }


    println!("Yes");
}

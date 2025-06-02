use proconio::{input, marker::Usize1};

fn main() {
    input! {
        n: usize,
        m: usize,
        lr: [(Usize1, Usize1); m],
    }
    let mut imos = vec![0; n + 1];
    lr.iter().for_each(|&(l, r)| {
        imos[l] += 1;
        imos[r + 1] -= 1;
    });
    let ans = imos[..n].iter().scan(0, |acc, &x| {
        *acc += x;
        Some(*acc)
    }).min().unwrap();
    println!("{}", ans);
   
}
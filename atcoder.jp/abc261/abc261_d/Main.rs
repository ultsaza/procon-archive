use proconio::input;

fn main() {
    input! {
        n: usize,
        m: usize,
        x: [usize; n],
        cy: [(usize, usize); m],
    }
    let mut dp = vec![isize::MIN;n+1];
    dp[0] = 0;
    for i in 0..n {
        let mut tmp = dp.clone();
        for j in 0..n {
            tmp[j+1] = dp[j] + x[i] as isize;
        }
        for &(c, y) in cy.iter() {
            tmp[c] += y as isize;
        }
        for j in 0..=n {
            tmp[0] = tmp[0].max(dp[j]);
        }
        //let ans = tmp.iter().max().unwrap();
        //println!("{}", ans);
        dp = tmp;
    }
    let ans = dp.iter().max().unwrap();
    println!("{}", ans);
}
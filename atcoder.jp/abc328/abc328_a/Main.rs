use proconio::input;

fn main() {
    input! {
        n: i32,
        x: i32,
        s: [i32; n],
    }
    let mut ans = 0;
    for i in 0..n {
        if s[i as usize] <= x {
            ans += s[i as usize];
        }
    }
    println!("{}", ans);
}

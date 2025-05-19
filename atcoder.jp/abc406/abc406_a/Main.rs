use proconio::input;

fn main() {
    input! {
        (a, b, c, d): (u8, u8, u8, u8),
    }
    if (a, b) > (c, d) {
        println!("Yes");
    } else {
        println!("No");
    }
}

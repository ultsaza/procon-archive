use itertools::iproduct;
use proconio::{input, marker::Bytes};
fn main() {
    input! {
        h: usize,
        w: usize,
        k: usize,
        s: [Bytes; h]
    }
    let mut vis = vec![vec![false; w]; h];
    let mut ans = 0;
    for(i, j) in iproduct!(0..h, 0..w) {
        if s[i][j] == b'.' {
            dfs(h, w, k, i, j, 0, &mut vis, &s, &mut ans);
            vis = vec![vec![false; w]; h];
        }
    }
    println!("{}", ans);
}

fn dfs(h: usize, w: usize, k: usize, curh: usize, curw: usize, cark: usize, vis: &mut Vec<Vec<bool>>, s: &Vec<Vec<u8>>, ans: &mut usize) {
    if cark == k {
        *ans += 1;
    } else {
        vis[curh][curw] = true;
        for (dh, dw) in [(0, 1), (1, 0), (0, -1), (-1, 0)] {
            let nh = curh as isize + dh;
            let nw = curw as isize + dw;
            if nh < 0 || nh >= h as isize || nw < 0 || nw >= w as isize {
                continue;
            }
            if vis[nh as usize][nw as usize] {
                continue;
            }
            if s[nh as usize][nw as usize] == b'.' {
                dfs(h, w, k, nh as usize, nw as usize, cark + 1, vis, s, ans);
            }
        }
        vis[curh][curw] = false;
    }
}

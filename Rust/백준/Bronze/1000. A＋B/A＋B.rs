use std::io;

fn main() {
    let mut input = String::new();
    io::stdin().read_line(&mut input).unwrap(); // Read the entire line
    let nums: Vec<i32> = input
        .split_whitespace() // Split the line by any whitespace
        .map(|num| num.parse().unwrap()) // Parse each part as an integer
        .collect();

    if nums.len() >= 2 {
        println!("{}", nums[0] + nums[1]); // Output the sum of the first two numbers
    }
}

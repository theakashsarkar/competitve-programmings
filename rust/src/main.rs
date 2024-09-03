use std::env;
use std::process;
mod command;
use command::*;
fn main() {
    display_help();
    let args: Vec<String> = env::args().collect();
    let command = args.get(1).unwrap_or_else(|| {
        display_help();
        process::exit(0);
    });

    let exit_code = match command.as_str() {
        "add" => AddCommand::new(args).handle(),
        "list" => {
            println!("Displaying all todo ...");
            0
        },
        _ => {
            println!("Unknown Command");
            1
        },
    };

    process::exit(exit_code)
}


fn display_help() -> () 
{
    println!("Command:");
}



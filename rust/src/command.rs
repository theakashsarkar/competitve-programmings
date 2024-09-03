use std::fs;
use std::io::Write;

pub trait Command {
    fn handle(&self) -> i32;
}
pub struct AddCommand {
    args: Vec<String>,
}

impl AddCommand {

    pub fn new (args: Vec<String>) -> Self {
        AddCommand {
            args:args,
        }
    }

    pub fn handle(&self) -> i32 {
        let description_option = &self.args.get(2);
        if let Some(description) = description_option {
            let mut file = fs::OpenOptions::new()
                .write(true)
                .append(true)
                .open("storage.txt")
                .expect("File Not Found");
            
           writeln!(file, "{description}")
            .expect("Fill Not writable");
            println!("Added todo..");
            0
        } else {
            println!("Description is required");
            1
        }   
    }
}

impl Command for AddCommand {
    fn handle(&self) -> i32 {
        println!("Adding a todo...");
        dbg!(&self.args);
        0
    }
}

pub struct ListCommand {

}

impl ListCommand {

    pub fn new () -> Self {
        ListCommand {

        }
    }

    
}

impl Command for ListCommand {
    fn handle(&self) -> i32 {
        let contents = fs::read_to_string("storage.txt")
            .expect("File not found");
    
    
      println!("{contents}");
        0
    } 
}

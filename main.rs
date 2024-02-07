struct Node 
{
    data: i32,
    next: Option<Box<Node>>,
}
struct LinkedList 
{
    head: Option<Box<Node>>,
}
impl LinkedList 
{
    // Create a new empty linked list
    fn new() -> Self 
    {
        LinkedList { head: None }
    }
    // Insert a new element at the beginning of the list
    fn insert(&mut self, data: i32) 
    {
        let new_node = Box::new(Node 
        {
            data: data,
            next: self.head.take(),
        });
        self.head = Some(new_node);
    }
    // Print the linked list
    fn display(&self) 
    {
        let mut current = &self.head;
        print!("Linked List: ");
        while let Some(node) = current 
        {
            print!("{}  -- ", node.data);
            current = &node.next;
        }
        println!("None");
    }
}
fn main() 
{
    let mut list = LinkedList::new();
    list.insert(5);
    list.insert(10);
    list.insert(15);
    list.insert(20);
    list.insert(25);
    list.display();
}
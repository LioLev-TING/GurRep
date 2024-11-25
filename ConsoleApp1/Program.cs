using System;

namespace ConsoleApp1
{
    internal class Node<T>
    {
        private T value;
        private Node<T> next;

        // Constructor to initialize a new node
        public Node(T value)
        {
            this.value = value;
            this.next = null;
        }

        // Method to add a node to the list (at the end)
        public void Add(Node<T> next)
        {
            Node<T> current = this;
            while (current.next != null)  // Traverse to the last node
            {
                current = current.next;
            }
            current.next = next;  // Add the new node at the end
        }

        // Get the value of the node
        public T GetValue()
        {
            return this.value;
        }

        // Get the next node in the list
        public Node<T> GetNext()
        {
            return this.next;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            // Sample usage
            Node<int> firstNode = new Node<int>(1);
            Node<int> secondNode = new Node<int>(2);
            Node<int> thirdNode = new Node<int>(3);

            firstNode.Add(secondNode); // Add second node to the list
            firstNode.Add(thirdNode);

            Console.WriteLine("First Node Value: " + firstNode.GetValue());
            Console.WriteLine("Next Node Value: " + firstNode.GetNext().GetValue());
            Console.WriteLine("Next Node Value: " + firstNode.GetNext().GetNext().GetValue());
        }
    }
}

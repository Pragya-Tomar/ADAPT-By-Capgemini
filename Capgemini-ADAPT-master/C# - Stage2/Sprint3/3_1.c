using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

namespace Source {
	class Source {
	  static string[] toys=new string[5];
		static void Main(string[] args) {
		  int age ;
		//Write your code to read input and store in toys arrays
		for(int i = 0;i<5;i++)
        {
            toys[i]= Console.ReadLine();
        }
		age = Convert.ToInt32(Console.ReadLine());
			OrderToys();
			Console.WriteLine() ;
			DisplayToys( age);
			
			
		}
		
		public static void OrderToys() 
		{
		  //Write your code here
		  Array.Sort(toys); 
		   foreach(string g in toys) 
        { 
            Console.WriteLine(g); 
            // display sorted array 
        }
		}
		
		public static void DisplayToys(int age)
		{
		  //Write your code here
		  
		  Console.WriteLine(toys[age]);
		}
  }
}

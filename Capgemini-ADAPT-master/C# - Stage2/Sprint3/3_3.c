using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;

namespace Source {
	class Source {
		static void Main(string[] args) {
			//Fill your code here
			List<string> cus = new List<string>();
			string cus1 = Console.ReadLine();
			cus.Add(cus1);
            string cus2 = Console.ReadLine();
            cus.Add(cus2);
            string cus3 = Console.ReadLine();
            cus.Add(cus3);
            cus.Sort();
            
        string str=cus[0];
        char[] spearator = {','}; 
        String[] strlist = str.Split(spearator); 
        string str1=cus[1]; 
        String[] strlist1 = str1.Split(spearator); 
        string str2=cus[2];
        String[] strlist2 = str2.Split(spearator);
        var myList = new List<string>();
        myList.AddRange(strlist);
        myList.AddRange(strlist1);
        myList.AddRange(strlist2);
        string[] arr3 = myList.ToArray();
        
        string rl = Console.ReadLine();
        if (arr3.Contains(rl)) 
            Console.WriteLine(rl+":true"); 
        else
            Console.WriteLine(rl+":false"); 
        string rl1 = Console.ReadLine();
        if (arr3.Contains(rl1)) 
            Console.WriteLine(rl1+":true"); 
        else
            Console.WriteLine(rl1+":false"); 
        
		}	
  }
}

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
        Console.WriteLine(strlist[0]+","+strlist[1]); 
        
        string str1=cus[1];
        String[] strlist1 = str1.Split(spearator); 
        Console.WriteLine(strlist1[0]+","+strlist1[1]); 
        
        string str2=cus[2];
        String[] strlist2 = str2.Split(spearator); 
        Console.WriteLine(strlist2[0]+","+strlist2[1]); 
		}	
  }
}

/*Thomas Galland
//CSE
//October, 20, 2016*/

import java.util.Scanner;

public class Bobcar
{
		public static void main(String[] args)
		{
			Scanner input = new Scanner(System.in);
			String cT; //car type
			
			System.out.println("Cars Available:");
			System.out.println("1 - Economy");
			System.out.println("2 - Compact");
			System.out.println("3 - Standard");
			
			System.out.print("Please choose your rental type: ");
			int c = input.nextInt(); //car
			
			System.out.print("Please enter the number of rental days: ");
			int d = input.nextInt(); //days
			
			System.out.print("Are you a club member? [y/n]: ");
			String m = input.toString(); //member
			
			if (m == "y")
			{
				System.out.print("Plantinum Executive Package? [y/n]: ");
				String e = input.toString(); //exclusive
				
				int r; //result
				
				if (c == 1)
				{
					r = 35;
					cT = "Economy";
				}
				else if (c == 2)
				{
					r = 45;
					cT = "Compact";
				}
				else if (c == 3)
				{
					r = 95;
					cT = "Standard";
				}
				else
				{
					System.out.println("Wrong choice, please start over.");
				}
				
				int b; //base
				
				b = (d * r);
				System.out.print("Base: " + d + " days for " + c + " @ " + r + " per day.");
				System.out.println(" $" + (double)(b));
				
				if (m == "y")
				{
					int di; //discount
					di = (int)(d/5) * r;
					System.out.print("Club Member Discount:             ");
					System.out.println("-$" + d);
				}
				else if (m == "n");
				{
					int di; //discount
					di = 0
				}
				else
				{
					System.out.println("Wrong choice, please start over.");
				}
					if (executive == "y")
					{
						int di; //discount
						di = (d/5) * r;
						
						int dipl; //Platinum Executive Discount
						dipl = (int)(b * .2);
						System.out.print("Platinum Executive Package:       ");
						System.out.println(" +$" + (double)(dipl));
						
						int TwD; //total with platinum discount
						TwD = b - di + dipl;
						System.out.print("Total Estimate for Rental:         ");
						System.out.println(" $" + (double)(TwD));
					}
					else if (e == "n")
					{
						int di;
						di = (d/5) * r;
						
						int TnD; //total with no platinum discount
						TnD = b - di;
						System.out.print("Total Estimate for Rental:        ");
						System.out.println("   $" + (double)(TnD));
					}
			}
			else if (m == "n");
			{
				int r = 0; //result
				
				if (c == 1);
				{
					r = 35;
				}
				else if (c == 2);
				{
					r = 45;
				}
				else if (c == 3);
				{
					r = 95;
				}
				else
				{
					System.out.println("Wrong choice, please start over.");
				}
				
				int b; //base
				
				b = (d * r);
				System.out.print("Base: " + d + " days for " + c + " @ " + r + " per day.");
				System.out.println("  $" + (double)(b));
				
				int t; //total
				
				t = b;
				System.out.print("Total Estimate for Rental:         ");
				System.out.println("  $" + t);
			}
			else
			{
				System.out.println("Wrong choice, please start over.");
			}
		}
}
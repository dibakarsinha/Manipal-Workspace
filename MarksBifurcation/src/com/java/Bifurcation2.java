package com.java;

import java.util.Arrays;
import java.util.OptionalInt;
import java.util.Random;
import java.util.Scanner;

public class Bifurcation2 {

	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);

		// Get the number to be divided
		System.out.println("Enter the number to be divided: ");
		int number = scanner.nextInt();

		// Get the threshold values
		System.out.println("Enter the threshold values for the 4 parts: ");
		int[] thresholds = new int[4];
		for (int i = 0; i < 4; i++) {
			thresholds[i] = scanner.nextInt();
		}

		// Divide the number into 4 parts
		int[] parts = divideNumber(number, thresholds);

		// Print the results
		System.out.println("The 4 parts are: ");
		for (int i = 0; i < 4; i++) {
			System.out.println(parts[i]);
		}
	}

	public static int[] divideNumber(int number, int[] thresholds) {
		int[] parts = new int[4];
		int sum = 0;
		boolean flag = true;
		for (int i = 0; i < 3; i++) {
			if(number == sum || sum<number) {
				parts[i] = randomNo();
			}else {
				parts[i] = 0;
			}
			sum=sumOfAllParts(parts);
		}
		return parts;
	}

	public static int randomNo() {
		Random rnd = new Random();
		int[] exclude = new int[0];
    OptionalInt random = rnd.ints(5, 15 + 1)
    	      .filter(num -> Arrays.stream(exclude).noneMatch(ex -> num == ex))
    	      .findFirst();
    	    return random.orElse(0);}

	public static int sumOfAllParts(int parts[]) {
		int sum = 0;
		for (int i = 0; i < parts.length; i++) {
			sum = sum + parts[i];
		}
		return sum;

	}
}
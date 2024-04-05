package com.java;

import java.util.Random;
import java.util.Scanner;

public class Bifurcation {

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
			parts[i] = randomNo();
			int k = 0;
			for (int j = 0; j <= i; j++) {
				sum = sumOfAllParts(parts);
				if (number == sum) {
					flag = false;
					k = parts.length - i;
					break;
				}
				if (number < sum) {
					parts[j] = number;
					flag = false;
					k = parts.length - i;
					break;
				}
				if (sum > number) {
					parts[j] = number - parts[j];
					flag = false;
					k = parts.length - i;
					break;
				}
			}
			if (flag == false) {
				for (; i < k; i++) {
					parts[i] = 0;
				}
				break;
			}
			if (sum < number) {
				parts[i] = number - sum;
			}
		}

		return parts;
	}

	public static int randomNo() {
		Random random = new Random(); // or new Random(someSeed);
		int value = 0 + random.nextInt(15);
		return value;

	}

	public static int sumOfAllParts(int parts[]) {
		int sum = 0;
		for (int i = 0; i < parts.length; i++) {
			sum = sum + parts[i];
		}
		return sum;

	}
}
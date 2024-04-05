package com.java;

import java.util.Random;

public class RandomGeneratorWithinRange {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Random random = new Random(); // or new Random(someSeed);
		int value = 0 + random.nextInt(15);
		System.out.println(value);
	}

}

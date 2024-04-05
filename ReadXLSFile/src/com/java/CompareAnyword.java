package com.java;

import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class CompareAnyword {

	public static void main(String[] args) {
		String sentence = "Check this answer and you can find the keyword with this code";
		String search = "key word";
		String[] array = search.toLowerCase().split(" ");
		for (String string : array) {
			//System.out.println(string + " ");
		}

		/*
		 * if (sentence.toLowerCase().indexOf(search.toLowerCase()) != -1) {
		 * System.out.println("I found the keyword"); 
		 * } else {
		 * 
		 * System.out.println("not found"); }
		 */
		for (String string : array) {
			if (sentence.toLowerCase().contains(string)) {
				System.out.println("I found the keyword");
				break;
			}
		}

		/*
		 * Pattern pattern = Pattern.compile(".*Hey.*"); if
		 * (pattern.matcher(sentence).matches()) {
		 * System.out.println("I found the keyword"); } else {
		 * System.out.println("not found"); }
		 */

		/*
		 * if (sentence.contains(search)) { System.out.println("I found the keyword");
		 * 
		 * } else {
		 * 
		 * System.out.println("not found");
		 * 
		 * }
		 */
	}

}

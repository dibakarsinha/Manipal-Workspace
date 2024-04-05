package com.java;

import java.io.File;
import java.io.FileInputStream;
import java.util.ArrayList;
import java.util.List;

import org.apache.poi.xssf.usermodel.XSSFWorkbook;

public class PrintFileNameForDirectory {
	public static void main(String[] args) {
		String maindirpath = "D:\\Manipal\\Placement\\offer-letter-2022\\offer-letter-2022";
		List<String> fileNameList = new ArrayList<String>();
		List<String> studentNameList = new ArrayList<String>();
		List<File> fileRenameList = new ArrayList<File>();
		File maindir = new File(maindirpath);
		File arr[] = maindir.listFiles();
		for (File f : arr) {
			System.out.println(f.getName());
		}
		
	}
}

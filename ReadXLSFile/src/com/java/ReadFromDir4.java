package com.java;

import java.io.File;
import java.io.FileInputStream;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

import org.apache.poi.xssf.usermodel.XSSFSheet;
import org.apache.poi.xssf.usermodel.XSSFWorkbook;

public class ReadFromDir4 {
	public static void main(String[] args) {
		String maindirpath = "D:\\Manipal\\Placement\\22-Aug-2023\\Harish-Data";
		List<String> fileNameList = new ArrayList<String>();
		List<String> studentNameList = new ArrayList<String>();
		File maindir = new File(maindirpath);
		File arr[] = maindir.listFiles();
		for (File f : arr) {
			if (f.getName().equalsIgnoreCase(("Data_final.xlsx"))) {
				continue;
			}
			fileNameList.add(f.getName());
		}
		try {
			FileInputStream file = new FileInputStream(
					new File("D:\\Manipal\\Placement\\22-Aug-2023\\Data_final.xlsx"));

			XSSFWorkbook workbook = new XSSFWorkbook(file);

			// XSSFSheet sheet = workbook.getSheetAt(0);

			for (int i = 1; i < workbook.getSheetAt(0).getPhysicalNumberOfRows(); i++) {
				if (workbook.getSheetAt(0).getRow(i).getCell(4).toString().trim() != "")
					studentNameList.add(workbook.getSheetAt(0).getRow(i).getCell(4).toString().trim());
			}
			for (String i : fileNameList) {
				int k = 0;
				boolean flag = false;
				for (String j : studentNameList) {
					k++;
					String[] array = j.toLowerCase().split(" ");
					for (String string : array) {
						if (i.toLowerCase().contains(string) && string.length() > 2) {
							System.out.println(
									j + " Placed in " + workbook.getSheetAt(0).getRow(k).getCell(5).toString().trim());
							flag = true;
							break;
						}
					}
					// System.out.println("Hi");
					if (flag == true)
						break;
				}
			}
			workbook.close();
			file.close();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}

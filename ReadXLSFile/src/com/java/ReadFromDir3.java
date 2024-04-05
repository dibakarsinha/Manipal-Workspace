package com.java;

import java.io.File;
import java.io.FileInputStream;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

import org.apache.poi.xssf.usermodel.XSSFSheet;
import org.apache.poi.xssf.usermodel.XSSFWorkbook;

public class ReadFromDir3 {
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

			XSSFSheet sheet = workbook.getSheetAt(0);

			for (int i = 0; i < workbook.getSheetAt(0).getPhysicalNumberOfRows(); i++) {
				if (workbook.getSheetAt(0).getRow(i).getCell(4).toString().trim() != "")
					studentNameList.add(workbook.getSheetAt(0).getRow(i).getCell(4).toString().trim());
			}
			int k = 0;
			for (String i : fileNameList) {
				k++;
				for (String j : studentNameList) {
					
					if (i.contains(j))

						System.out.println(j + " Placed in "
								+ workbook.getSheetAt(0).getRow(k).getCell(5).toString().trim());
				}
			}
			file.close();
		} catch (Exception e) {
			e.printStackTrace();
		}
	}
}

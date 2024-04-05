package com.java;

import java.io.File;
import java.io.FileInputStream;
import java.util.Iterator;

import org.apache.poi.ss.usermodel.Cell;
import org.apache.poi.ss.usermodel.Row;
import org.apache.poi.xssf.usermodel.XSSFSheet;
import org.apache.poi.xssf.usermodel.XSSFWorkbook;

public class ReadFromDir2 {
	public static void main(String[] args) {
		String maindirpath = "D:\\Manipal\\Placement\\19-Aug-2023";

		// File object
		File maindir = new File(maindirpath);
		File arr[] = maindir.listFiles();
		for (File f : arr) {

			if (f.getName().equalsIgnoreCase(("Data_final.xlsx"))) {

				continue;
			}

			try {
				FileInputStream file = new FileInputStream(
						new File("D:\\Manipal\\Placement\\19-Aug-2023\\Data_final.xlsx"));

				// Create Workbook instance holding reference to .xlsx file
				XSSFWorkbook workbook = new XSSFWorkbook(file);

				// Get first/desired sheet from the workbook
				XSSFSheet sheet = workbook.getSheetAt(0);

				// Iterate through each rows one by one
				Iterator<Row> rowIterator = sheet.iterator();
				while (rowIterator.hasNext()) {
					Row row = rowIterator.next();
					// For each row, iterate through all the columns
					Iterator<Cell> cellIterator = row.cellIterator();

					while (cellIterator.hasNext()) {
						Cell cell = cellIterator.next();
						// Check the cell type and format accordingly
						switch (cell.getCellType()) {
						case Cell.CELL_TYPE_NUMERIC:
							// System.out.print(cell.getNumericCellValue() + "t");
							if (f.getName() == String.valueOf(cell.getNumericCellValue()))
								System.out.println("match found of " + f.getName());
							break;
						case Cell.CELL_TYPE_STRING:
							// System.out.print(cell.getStringCellValue() + "t");
							if (f.getName().contains(cell.getStringCellValue()))
								System.out.println("match found of " + f.getName());

							break;
						}
					}
					//System.out.println("");
				}
				file.close();
			} catch (Exception e) {
				e.printStackTrace();
			}
		}
	}
}

package com.java;

import java.io.File;
import java.io.FileInputStream;
import java.util.ArrayList;
import java.util.List;

import org.apache.poi.xssf.usermodel.XSSFWorkbook;

public class RenameFile {
	public static void main(String[] args) {
		String maindirpath = "D:\\Manipal\\Placement\\OneDrive_1_16-10-2023";
		List<String> fileNameList = new ArrayList<String>();
		List<String> studentNameList = new ArrayList<String>();
		List<File> fileRenameList = new ArrayList<File>();
		File maindir = new File(maindirpath);
		File arr[] = maindir.listFiles();
		for (File f : arr) {
			// System.out.println(f.getName() + "\n");
			String[] stringarray = f.getName().split("_");
			/*
			 * for (int i = 0; i < stringarray.length; i++) { // prints the tokens
			 * System.out.println(stringarray[i]+"\t"); }
			 */
			// System.out.println(f.getName());
			System.out.println(f.getName().substring(f.getName().lastIndexOf('_') + 1, f.getName().lastIndexOf('.')));
		}
		/*
		 * try { FileInputStream file = new FileInputStream( new
		 * File("C:\\Users\\dibakars\\Desktop\\PBL-2 Project List All section.xlsx"));
		 * 
		 * XSSFWorkbook workbook = new XSSFWorkbook(file);
		 * 
		 * // XSSFSheet sheet = workbook.getSheetAt(0);
		 * 
		 * for (int i = 1; i < workbook.getSheetAt(5).getPhysicalNumberOfRows(); i++) {
		 * if (workbook.getSheetAt(5).getRow(i).getCell(3).toString().trim() != "")
		 * studentNameList.add(workbook.getSheetAt(5).getRow(i).getCell(3).toString().
		 * trim()); fileRenameList.add(new
		 * File(workbook.getSheetAt(5).getRow(i).getCell(3).toString().trim())); } //int
		 * i=0;
		 * 
		 * for (File f : arr) { f.renameTo(fileRenameList.get(i)); i++; }
		 * 
		 * workbook.close(); file.close(); } catch (Exception e) { e.printStackTrace();
		 * }
		 */
	}
}

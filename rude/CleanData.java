package com;

import java.io.*;

public class CleanData {
    public static void main(String[] args) throws IOException {
        String outPath = "/home/northboat/Desktop/data/output1.txt";
        File out = new File(outPath);
        out.createNewFile();
        BufferedWriter bw = new BufferedWriter(new FileWriter(out));

        String inPath = "/home/northboat/Desktop/data/output_1.txt";
        File in = new File(inPath);
        BufferedReader br = new BufferedReader(new FileReader(in));

        String line;
        while((line = br.readLine()) != null){
            /*if(line.charAt(0) == '&'){
                line = '<' + line.substring(4, line.length()-4) + '>';
            }
            bw.write(line + '\n');*/
            bw.write(line + '\\' + 'n');
            bw.flush();
        }
        bw.flush();
        bw.close();
        br.close();

    }
}

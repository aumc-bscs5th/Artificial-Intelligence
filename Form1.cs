using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.IO;
using System.Text.RegularExpressions;

namespace AIFirstProject
{
    public partial class Form1 : Form
    {
        
        public Form1()
        {
            
            

            InitializeComponent();
        }



        public async void SubmitButton_Click(object sender, EventArgs e)
        {

            double counter = 0;
            string line = "";
            
            String phrase = paragraphTextBox.Text;
            using (StreamReader reader = new StreamReader(@"C:\Users\Zeeshan Waheed\Desktop\noun.txt"))
            {
                while ((line =  reader.ReadLine()) != null)
                {
                    counter++;
                    phrase = Regex.Replace(phrase, line, "-----");


                }

                BlankSpacesTextBox.Text = phrase;
                if (NounRadioButton = checked )
                {
                   
                }

            }

        }
    }
        

       
  

}
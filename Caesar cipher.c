using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace WindowsFormsApplication1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            string plain = textBox1.Text;
            plain = plain.ToUpper();
            int key = Convert.ToInt32(textBox2.Text);
            string cipher= "";
            for (int i = 0; i < plain.Length;i++ ) {
                int p1=plain[i]-65;
                int p2 = (p1 + key) % 26 + 65;
                cipher += (char)p2;

            }
            textBox3.Text = cipher;
        }
    }
}

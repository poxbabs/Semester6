﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using Lab41;

namespace Lab42
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void btnCheckCpr_Click(object sender, RoutedEventArgs e)
        {
            CprError cprError;
            CprCheck cprCheck = new CprCheck();

            cprCheck.Check(tbxCprNr.Text, out cprError);

            switch (cprError)
            {
                case CprError.NoError:
                    tblErrorMsg.Text = "CPR Valid";
                    break;
                case CprError.FormatError:
                    tblErrorMsg.Text = "Invalid format!";
                    break;
                case CprError.DateError:
                    tblErrorMsg.Text = "Invalid date!";
                    break;
                case CprError.Check11Error:
                    tblErrorMsg.Text = "Invalid CPR!";
                    break;
                default:
                    tblErrorMsg.Text = "Unknown error!";
                    break;
            }
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            tbxCprNr.Focus();
        }

        private void tbxCprNr_TextChanged(object sender, TextChangedEventArgs e)
        {
            tblErrorMsg.Text = " ";
        }
    }
}
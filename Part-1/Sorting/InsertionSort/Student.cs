using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace InsertionSort
{
    public class Student : IComparable<Student>
    {
        public int Year { get; set; }
        public int Month { get; set; }
        public int Day { get; set; }

        public Student(int date, int month, int year)
        {
            this.Year = year;
            this.Month = month;
            this.Day = date;
        }
        public int CompareTo(Student other)
        {
            if (other.Year < this.Year) return -1;
            if (other.Year > this.Year) return 1;

            if (other.Month > this.Month) return 1;
            if (other.Month < this.Month) return -1;

            if (other.Day > this.Day) return 1;
            if (other.Day < this.Day) return -1;

            return 0;
        }
    }
}

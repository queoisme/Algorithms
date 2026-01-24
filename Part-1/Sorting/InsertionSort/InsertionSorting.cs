using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace InsertionSort
{
    public static class InsertionSorting
    {
        public static void Sort<T>(T[] a) where T : IComparable<T>
        {
            int n = a.Length;
            for (int i = 0; i < n; i++)
            {
                for (int j = i; j > 0 && less(a[j], a[j - 1]); j--)
                {
                    Swap(a, j - 1, j);
                }
            }

        }

        private static bool less<T>(T ai, T aj) where T : IComparable<T>
        {
            return ai.CompareTo(aj) > 0;
        }
        private static void Swap<T>(T[] a, int i, int j) where T : IComparable<T>
        {
            T tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
        }
        public static bool isSorted<T>(T[] a) where T : IComparable<T>
        {
            for (int i = 1; i < a.Length; i++)
            {
                if (less(a[i], a[i - 1])) return false;

            }

            return true;
        }
    }
}

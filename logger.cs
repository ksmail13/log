using System;

class Logger
{
    static public void log(string msg, params object[] objs)
    {
        StackTrace st = new StackTrace();
        StackFrame sf = st.GetFrame(1);
        
        Console.Write("[{0}({1})] ", sf.GetFileName(), sf.GetFileLineNumber());
        Console.WriteLine(msg, objs);
    }
}
package org.digimead

object HelloWorldJNI {
  // If the framework passed in a specific library, use it.
  val libname = System.getProperty("native.lib")
  if (libname ne null)
    System.load(libname)
  else
    System.loadLibrary("org_digimead_HelloWorldJNI")

  @native
  def printOne()
  @native
  def printTwo()

  def main(args: Array[String]) {
    println("Hello, world!")
    println("java.library.path: " + System.getProperty("java.library.path"))
    printOne()
    printTwo()
  }
}

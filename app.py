print("----------------------------------------------------------------------------------------------------------------\n")
print("                                                                                                                \n")
print("     //   ) )                                                //   ) )                                            \n")
print("    //   ) )                                                //   ) )                                            \n")
print("   //         __               ___    __  ___  ___         ((         ___      ___               __      ___    \n")
print("  //        //  ) ) //   / / //   ) )  / /   //   ) )        \\     //___) ) //   ) ) //   / / //  ) ) //___) ) \n")
print(" //        //      ((___/ / //___/ /  / /   //   / /           ) ) //       //       //   / / //      //        \n")
print("((____/ / //           / / //        / /   ((___/ /     ((___ / / ((____   ((____   ((___( ( //      ((____     \n")
print("\n----------------------------------------------------------------------------------------------------------------\n")

a = int(input("Enter the License Key :- "));
if(a>11111 and a<99999 or a==123456):

    print("\n\n                 ****************************\n")
    print("                       ACCESS GRANTED \n")
    print("                 ****************************\n")
    print("        \n Welcome to CryptoSecure - A Secure Platform to make your secrets secure\n")
    print("          (Your secrets are secure between you and only you)\n")
    print("                           For any assist : cryptosecureuser@gmail.com\n")
    print("                                               Developers: Yatin Kalra\n")
    print("***********************************************************************\n")
    print(" What do you want to Encrypt or Decrypt\n")
    print(" [1] Text\n")
    print(" [2] File\n")
    b = int(input(" Selected Option :- "))
    
    if b == 1:
        import text
    elif b == 2:
        import file
        
    else:
        print("\n\n ERROR : Invalid Choice. Try Again!")

else:
    print("\n\nERROR : Wrong License Key. Contact your System Administrator or cryptosecureuser@gmail.com\n")

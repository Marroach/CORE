#include<stdio.h>
#include <ctype.h>


int		ft_islower(int c)
{
	return (c <= 'z' && c >= 'a');
}

int		ft_isupper(int c)
{
	return (c <= 'Z' && c >= 'A');
}

int		ft_isalpha(int c)
{
	return (ft_islower(c) || ft_isupper(c));
}

// Test function to compare ft_isalpha with isalpha
void test_isalpha(int c) {
    // Testing with ft_isalpha
    int ft_result = ft_isalpha(c);
    // Testing with standard isalpha
    int std_result = isalpha(c);

    // Print the character and both results
    printf("Character: '%c' (ASCII: %d)\n", c, c);
    printf("ft_isalpha: %d, isalpha: %d\n", ft_result, std_result);
    printf("-----\n");
}

int main() {
    // Test lowercase letters
    test_isalpha('a');
    test_isalpha('z');
    
    // Test uppercase letters
    test_isalpha('A');
    test_isalpha('Z');
    
    // Test digits
    test_isalpha('0');
    test_isalpha('9');
    
    // Test special characters
    test_isalpha('@');
    test_isalpha('[');
    
    // Test non-printable characters
    test_isalpha(10);  // Newline
    test_isalpha(32);  // Space
    
    return 0;
}
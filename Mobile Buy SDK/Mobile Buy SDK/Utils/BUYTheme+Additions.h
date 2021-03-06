//
//  BUYTheme+Additions.h
//  Mobile Buy SDK
//
//  Created by Shopify.
//  Copyright (c) 2015 Shopify Inc. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

#import "BUYTheme.h"
#import "BUYPaymentButton.h"

#define BUY_RGB(r, g, b) BUY_RGBA(r, g, b, 1)
#define BUY_RGBA(r, g, b, a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]

@interface BUYTheme (Additions)

#pragma mark - Colors

/**
 *  The product view background color used in various views based on the theme
 *
 *  @return The color appropriate for the BUYThemeStyle
 */
- (UIColor*)backgroundColor;

/**
 *  The background color for selected table view cells based on the theme
 *
 *  @return The color appropriate for the BUYThemeStyle
 */
- (UIColor*)selectedBackgroundColor;

/**
 *  The product view's table view separator color based on the theme
 *
 *  @return The color appropriate for the BUYThemeStyle
 */
- (UIColor*)separatorColor;

/**
 *  The product view's table view disclosure indicator color based on the theme
 *
 *  @return The color appropriate for the BUYThemeStyle
 */
- (UIColor*)disclosureIndicatorColor;

/**
 *  The Checkout button's text color based on the theme
 *
 *  @return The color appropriate for the BUYThemeStyle
 */
- (UIColor*)checkoutButtonTextColor;

/**
 *  Top gradient color
 *
 *  @return A dark color
 */
+ (UIColor*)topGradientViewTopColor;

/**
 *  The background color for the error toast view in the product view
 *
 *  @return The color appropriate for the BUYThemeStyle
 */
- (UIColor*)errorTintOverlayColor;

/**
 *  The navigation bar's title color based on the theme
 *
 *  @return The color appropriate for the BUYThemeStyle
 */
- (UIColor*)navigationBarTitleColor;

/**
 *  The variant selection's navigation bar's title color based on the theme
 *
 *  @return The color appropriate for the BUYThemeStyle
 */
- (UIColor*)navigationBarTitleVariantSelectionColor;

/**
 *  The color for the product title text
 *
 *  @return The color appropriate for the BUYThemeStyle
 */
- (UIColor*)productTitleColor;

/**
 *  The color for the product "compare at" text
 *
 *  @return The color appropriate for the BUYThemeStyle
 */
+ (UIColor*)comparePriceTextColor;

/**
 *  The color for the product's description text
 *
 *  @return The color appropriate for the BUYThemeStyle
 */
+ (UIColor*)descriptionTextColor;

/**
 *  The color for the variant option name text
 *
 *  @return The color appropriate for the BUYThemeStyle
 */
- (UIColor*)variantOptionNameTextColor;

/**
 *  The color for the variant price text
 *
 *  @return The color appropriate for the BUYThemeStyle
 */
+ (UIColor*)variantPriceTextColor;

/**
 *  The color for the variant "sold out" text
 *
 *  @return The color appropriate for the BUYThemeStyle
 */
+ (UIColor*)variantSoldOutTextColor;

/**
 *  The background color for the variant selection bread crumb view
 *
 *  @return The color appropriate for the BUYThemeStyle
 */
- (UIColor*)variantBreadcrumbsBackground;

/**
 *  The text color for the variant selection bread crumb view
 *
 *  @return The color appropriate for the BUYThemeStyle
 */
+ (UIColor*)variantBreadcrumbsTextColor;

#pragma mark - Padding and Sizes

/**
 *  8 pt padding
 */
extern CGFloat const kBuyPaddingSmall;

/**
 *  12 pt padding
 */
extern CGFloat const kBuyPaddingMedium;

/**
 *  14 pt padding
 */
extern CGFloat const kBuyPaddingLarge;

/**
 *  16 pt padding
 */
extern CGFloat const kBuyPaddingExtraLarge;

/**
 *  Height for the gradient padding on top of the product variant image
 */
extern CGFloat const kBuyTopGradientViewHeight;

/**
 *  Height for the checkout and Apple Pay buttons
 */
extern CGFloat const kBuyCheckoutButtonHeight;

/**
 *  Height for the page control for the product images collection view
 */
extern CGFloat const kBuyPageControlHeight;

/**
 *  Height of the gradient when the page control is visible
 */
extern CGFloat const kBuyBottomGradientHeightWithPageControl;

/**
 *  Height of the gradient when the page control is not visible
 */
extern CGFloat const kBuyBottomGradientHeightWithoutPageControl;

#pragma mark - Fonts

/**
 *  Product view's title font
 *
 *  @return Font with text style UIFontTextStyleBody with an increased point size of 4
 */
+ (UIFont*)productTitleFont;

/**
 *  Product view's price font
 *
 *  @return Font with text style UIFontTextStyleBody with an increased point size of 4
 */
+ (UIFont*)productPriceFont;

/**
 *  Product view's compare at price font
 *
 *  @return Font with text style UIFontTextStyleBody
 */
+ (UIFont*)productComparePriceFont;

/**
 *  Product view's variant option name font
 *
 *  @return Font with text style UIFontTextStyleFootnote
 */
+ (UIFont*)variantOptionNameFont;

/**
 *  Product view's variant option value font
 *
 *  @return Font with text style UIFontTextStyleBody with an increased point size of 2
 */
+ (UIFont*)variantOptionValueFont;

/**
 *  Variant selection price
 *
 *  @return Font with text style UIFontTextStyleSubheadline
 */
+ (UIFont*)variantOptionPriceFont;

/**
 *  Variant selection bread crumbs view text font
 *
 *  @return Font with text style UIFontTextStyleSubheadline
 */
+ (UIFont*)variantBreadcrumbsFont;

/**
 *  Product view's error view text font
 *
 *  @return Font with text style UIFontTextStyleBody
 */
+ (UIFont*)errorLabelFont;

#pragma mark - Misc

/**
 *  Blur effect style for for the product view
 *
 *  @return The blur effect appropriate for the theme
 */
- (UIBlurEffect*)blurEffect;

/**
 *  Activity indicator style for the product view when loading a product
 *
 *  @return The activity indicator style appropriate for the theme
 */
- (UIActivityIndicatorViewStyle)activityIndicatorViewStyle;

/**
 *  Navigation bar style for the product view
 *
 *  @return The navigation bar style appropriate for the theme
 */
- (UIBarStyle)navigationBarStyle;

/**
 *  Apple Pay button style for the product view
 *
 *  @return The button style appropriate for the theme
 */
- (BUYPaymentButtonStyle)paymentButtonStyle;

@end

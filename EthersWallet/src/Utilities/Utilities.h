/**
 *  MIT License
 *
 *  Copyright (c) 2017 Richard Moore <me@ricmoo.com>
 *
 *  Permission is hereby granted, free of charge, to any person obtaining
 *  a copy of this software and associated documentation files (the
 *  "Software"), to deal in the Software without restriction, including
 *  without limitation the rights to use, copy, modify, merge, publish,
 *  distribute, sublicense, and/or sell copies of the Software, and to
 *  permit persons to whom the Software is furnished to do so, subject to
 *  the following conditions:
 *
 *  The above copyright notice and this permission notice shall be included
 *  in all copies or substantial portions of the Software.
 *
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 *  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 *  THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 *  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 *  DEALINGS IN THE SOFTWARE.
 */

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define ICON_NAME_ALERT              @"A"
#define ICON_NAME_SECURITY_CAMERA    @"B"
#define ICON_NAME_CHECKMARK          @"C"
#define ICON_NAME_CAMERA             @"D"
#define ICON_NAME_ACCOUNTS           @"E"
#define ICON_NAME_PRIVACY            @"F"
#define ICON_NAME_FIRES              @"G"
#define ICON_NAME_HAMBURGER          @"H"
#define ICON_NAME_TX_RECEIVED        @"I"
#define ICON_NAME_FLOODS             @"J"
#define ICON_NAME_TX_SENT            @"K"
#define ICON_NAME_LOGO               @"L"
#define ICON_NAME_DAMAGE             @"M"
#define ICON_NAME_THEFT              @"N"
#define ICON_NAME_FAILURE            @"O"
#define ICON_NAME_LOSS               @"P"
#define ICON_NAME_SEARCH             @"Q"
#define ICON_NAME_CONTRACT           @"R"
#define ICON_NAME_SELECTED           @"S"
#define ICON_NAME_FINGERPRINT        @"T"
#define ICON_NAME_CIRCLE_PLUS        @"U"
#define ICON_NAME_CAMERA_ROLL        @"V"
#define ICON_NAME_WALLET             @"W"
#define ICON_NAME_X                  @"X"

//#define FONT_MONOSPACE               @"AmericanTypewriter"
//#define FONT_MONOSPACE_SMALL         @"AmericanTypewriter-Condensed"
#define FONT_MONOSPACE               @"Menlo-Bold"
#define FONT_MONOSPACE_SMALL         @"Menlo-Regular"
#define FONT_NORMAL                  @"HelveticaNeue"
#define FONT_BOLD                    @"HelveticaNeue-Bold"
#define FONT_ITALIC                  @"HelveticaNeue-Italic"
#define FONT_BOLD_ITALIC             @"HelveticaNeue-BoldItalic"

#define FONT_ETHERS                  @"ethers"



@interface Utilities : NSObject

+ (NSString*)timeAgo: (NSTimeInterval)timestamp;

+ (UIButton*)ethersButton: (NSString*)iconName fontSize: (CGFloat)fontSize color: (NSUInteger)color;

+ (UILabel*)navigationBarTitleWithString: (NSString*)title;

+ (void)setupNavigationBar: (UINavigationBar*)navigationBar backgroundColor: (UIColor*)backgroundColor;
+ (UINavigationBar*)addNavigationBarToView: (UIView*)view;

+ (UILabel*)navigationBarLogoTitle;

+ (UIImage*)qrCodeForData: (NSData*)data width: (CGFloat)width color: (UIColor*)color padding: (CGFloat)padding;

+ (NSString*)userAgent;

/* Create a fetching library?
 ApplicationViewController should create it's own provider. Add clone provider?
@property (nonatomic, assign) maximumRequestsPerMinute;
- (DataPromise*)fetchUrl: (NSString*)url;
- (DictionaryPromise*)fetchJSONUrl: (NSString*)url;
- (void)cancelAllRequests;
*/
@end

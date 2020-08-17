//
//  SnailTool.h
//  SnailKit
//
//  Created by liu on 2020/1/9.
//  Copyright © 2020 CrazySnail. All rights reserved.
//

#import <UIKit/UIKit.h>

#define Snail_Color_White [UIColor whiteColor]
#define Snail_Color_Black [UIColor blackColor]
#define Snail_Color_DarkGray [UIColor darkGrayColor]
#define Snail_Color_LightGray [UIColor lightGrayColor]
#define Snail_Color_Gray [UIColor grayColor]
#define Snail_Color_Red [UIColor redColor]
#define Snail_Color_Green [UIColor greenColor]
#define Snail_Color_Blue [UIColor blueColor]
#define Snail_Color_Cyan [UIColor cyanColor]
#define Snail_Color_Yellow [UIColor yellowColor]
#define Snail_Color_Magenta [UIColor magentaColor]
#define Snail_Color_Orange [UIColor orangeColor]
#define Snail_Color_Purple [UIColor purpleColor]
#define Snail_Color_Brown [UIColor brownColor]
#define Snail_Color_Clear [UIColor clearColor]
#define Snail_Color_System_Red [UIColor systemRedColor]
#define Snail_Color_System_Green [UIColor systemGreenColor]
#define Snail_Color_System_Blue [UIColor systemBlueColor]
#define Snail_Color_System_Orange [UIColor systemOrangeColor]
#define Snail_Color_System_Yellow [UIColor systemYellowColor]
#define Snail_Color_System_Pink [UIColor systemPinkColor]
#define Snail_Color_System_Purple [UIColor systemPurpleColor]
#define Snail_Color_System_Teal [UIColor systemTealColor]
#define Snail_Color_System_Indigo [UIColor systemIndigoColor]
#define Snail_Color_System_Gray [UIColor systemGrayColor]
#define Snail_Color_System_Gray2 [UIColor systemGray2Color]
#define Snail_Color_System_Gray3 [UIColor systemGray3Color]
#define Snail_Color_System_Gray4 [UIColor systemGray4Color]
#define Snail_Color_System_Gray5 [UIColor systemGray5Color]
#define Snail_Color_System_Gray6 [UIColor systemGray6Color]
#define Snail_Color_Label [UIColor labelColor]
#define Snail_Color_SecondaryLabel [UIColor secondaryLabelColor]
#define Snail_Color_TertiaryLabel [UIColor tertiaryLabelColor]
#define Snail_Color_QuaternaryLabel [UIColor quaternaryLabelColor]
#define Snail_Color_Link [UIColor linkColor]
#define Snail_Color_PlaceholderText [UIColor placeholderTextColor]
#define Snail_Color_Separator [UIColor separatorColor]
#define Snail_Color_OpaqueSeparator [UIColor opaqueSeparatorColor]
#define Snail_Color_SystemBackground [UIColor systemBackgroundColor]
#define Snail_Color_SecondarySystemBackground [UIColor secondarySystemBackgroundColor]
#define Snail_Color_TertiarySystemBackground [UIColor tertiarySystemBackgroundColor]
#define Snail_Color_SystemGroupedBackground [UIColor systemGroupedBackgroundColor]
#define Snail_Color_SecondarySystemGroupedBackground [UIColor secondarySystemGroupedBackgroundColor]
#define Snail_Color_TertiarySystemGroupedBackground [UIColor tertiarySystemGroupedBackgroundColor]
#define Snail_Color_SystemFill [UIColor systemFillColor]
#define Snail_Color_SecondarySystemFill [UIColor secondarySystemFillColor]
#define Snail_Color_TertiarySystemFill [UIColor tertiarySystemFillColor]
#define Snail_Color_QuaternarySystemFill [UIColor quaternarySystemFillColor]
#define Snail_Color_LightText [UIColor lightTextColor]
#define Snail_Color_DarkText [UIColor darkTextColor]
#define Snail_Color_GroupTableViewBackground [UIColor groupTableViewBackgroundColor]
#define Snail_Color_ViewFlipsideBackground [UIColor viewFlipsideBackgroundColor]
#define Snail_Color_ScrollViewTexturedBackground [UIColor scrollViewTexturedBackgroundColor]
#define Snail_Color_UnderPageBackgroundColor [UIColor underPageBackgroundColor]

#define Snail_Color_RGBA(R,G,B,A) [UIColor colorWithRed:R/255.0 green:G/255.0 blue:B/255.0 alpha:A]
#define Snail_Color_RGB(R,G,B) Snail_Color_RGBA(R,G,B,1)
#define Snail_Color_RGB_EQUAL(VALUE) Snail_Color_RGB(VALUE,VALUE,VALUE)
#define Snail_Color_RGBA_EQUAL(VALUE,A) Snail_Color_RGBA(VALUE,VALUE,VALUE,A)
#define Snail_Color_HEX(HEX) [UIColor colorWithRed:((float)((HEX & 0xFF0000) >> 16))/255.0 green:((float)((HEX & 0xFF00) >> 8))/255.0 blue:((float)(HEX & 0xFF))/255.0 alpha:1.0]
#define Snail_Color_HEXA(HEX,A) [UIColor colorWithRed:((float)((HEX & 0xFF0000) >> 16))/255.0 green:((float)((HEX & 0xFF00) >> 8))/255.0 blue:((float)(HEX & 0xFF))/255.0 alpha:A]

#define Snail_Size_LabelFont [UIFont labelFontSize]
#define Snail_Size_ButtonFont [UIFont buttonFontSize]
#define Snail_Size_SmallSystemFont [UIFont smallSystemFontSize]
#define Snail_Size_SystemFont [UIFont systemFontSize]

#define Snail_Size_Ceil(SIZE) CGSizeMake(ceil(SIZE.width), ceil(SIZE.height))
#define Snail_Size_Center_X(A,B) ((A.width - B.width) * .5)
#define Snail_Size_Center_Y(A,B) ((A.height - B.height) * .5)

#define Snail_Float_Screen_Width UIScreen.mainScreen.bounds.size.width
#define Snail_Float_Screen_Height UIScreen.mainScreen.bounds.size.height
#define Snail_Float_Min_Screen_WH MIN(Snail_Float_Screen_Width,Snail_Float_Screen_Height)
#define Snail_Float_Max_Screen_WH MAX(Snail_Float_Screen_Width,Snail_Float_Screen_Height)

#define Snail_Font_Label [UIFont systemFontOfSize:[UIFont labelFontSize]]
#define Snail_Font_Button [UIFont systemFontOfSize:[UIFont buttonFontSize]]
#define Snail_Font_SmallSystem [UIFont systemFontOfSize:[UIFont smallSystemFontSize]]
#define Snail_Font_System [UIFont systemFontOfSize:[UIFont systemFontSize]]

#define Snail_Font_Dynamic_LargeTitle [UIFont preferredFontForTextStyle:UIFontTextStyleLargeTitle]
#define Snail_Font_Dynamic_Title1 [UIFont preferredFontForTextStyle:UIFontTextStyleTitle1]
#define Snail_Font_Dynamic_Title2 [UIFont preferredFontForTextStyle:UIFontTextStyleTitle2]
#define Snail_Font_Dynamic_Title3 [UIFont preferredFontForTextStyle:UIFontTextStyleTitle3]
#define Snail_Font_Dynamic_HeadLine [UIFont preferredFontForTextStyle:UIFontTextStyleHeadline]
#define Snail_Font_Dynamic_SubHeadLine [UIFont preferredFontForTextStyle:UIFontTextStyleSubheadline]
#define Snail_Font_Dynamic_Body [UIFont preferredFontForTextStyle:UIFontTextStyleBody]
#define Snail_Font_Dynamic_Callout [UIFont preferredFontForTextStyle:UIFontTextStyleCallout]
#define Snail_Font_Dynamic_Footnote [UIFont preferredFontForTextStyle:UIFontTextStyleFootnote]
#define Snail_Font_Dynamic_Caption1 [UIFont preferredFontForTextStyle:UIFontTextStyleCaption1]
#define Snail_Font_Dynamic_Caption2 [UIFont preferredFontForTextStyle:UIFontTextStyleCaption2]

@interface SnailTool : NSObject

///获取最顶层的controller
+ (UIViewController *)takeTopestController;

///结束编辑
+ (void)endEdit;

///打开链接
+ (void)openUrl:(NSURL *)url;

@end

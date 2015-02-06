
Idx:{//ISP_NVRAM_REG_INDEX_STRUCT
    Shading     :0,
    OB          :0,
    DM          :1,
    DP          :0,
    NR1         :3,
    NR2         :3,
    EE          :3,
    Saturation  :3,
    Contrast    :4,
    Hue         :1,
    CCM         :2,
    Gamma       :0
},
Shading:{
    {set:{//00 Preview
        0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x10000000,0x9050903C,0xC201B200,0x00580044,0x20202020,
    }},
    {set:{//01 Capture
        0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x10000000,0xF066F04C,0x40001950,0x006A005A,0x20202020,
    }},
    {set:{//02
        0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,0x00000000,
    }}
},
OB:{
    {set:{//00
        0xC0C0C0C0
    }}
        },
DM:{
    {set:{//00 Preview ISO100/ISO200/ISO400
        0x00000100, 0x0A800810, 0x0020083F, 
    }},
    {set:{//01 Preview ISO800
        0x00000100, 0x0A800810, 0x0020083F, 
    }},
    {set:{//02 Preview ISO1600
        0x00000100, 0x0A800810, 0x0020083F, 
    }},
    {set:{//03 Capture ISO100/ISO200
        0x00000100, 0x0A800810, 0x0020083F, 
    }},
    {set:{//04 Capture ISO400
        0x00000100, 0x0A800810, 0x0020083F, 
    }},
    {set:{//05 Capture ISO800
        0x00000100, 0x0A800810, 0x0020083F, 
    }},
    {set:{//06 Capture ISO1600
        0x00000100, 0x0A800810, 0x0020083F, 
    }}
            },
DP:{// Auto Defect
    {set:{//00
        0x000006E7, 0x50285050, 0x006003A0, 0x00300050, 0x000009B7, 
    }},
    {set:{//01
        0x000006E7, 0x50285050, 0x006003A0, 0x00300050, 0x000009B7, 
    }},
    {set:{//02
        0x000006E7, 0x50285050, 0x006003A0, 0x00300050, 0x000009B7, 
    }},
    {set:{//03 Disable (Do not modify me)
        0x00000000, 0x50285050, 0x006003A0, 0x00300050, 0x000008B7, 
    }}
        },
NR1:{
    {set:{//00 Preview ISO100
        0x000006E7, 0x000011A0, 0x092328C8, 0x000008AC, 0x05050507, 0x090B0C0C, 0x05050507, 
        0x090B0C0C, 0x05050507, 0x090B0C0C, 0x05050507, 0x090B0C0C, 0x0206090D, 0x10101010, 
    }},
    {set:{//01 Preview ISO200
        0x000006E7, 0x000011A0, 0x092728C8, 0x000008AC, 0x05050507, 0x090B0C0C, 0x05050507, 
        0x090B0C0C, 0x05050507, 0x090B0C0C, 0x05050507, 0x090B0C0C, 0x0206090D, 0x10101010, 
    }},
    {set:{//02 Preview ISO400
        0x000006E7, 0x000011A0, 0x092928C8, 0x000008AC, 0x05050507, 0x090B0C0C, 0x05050507, 
        0x090B0C0C, 0x05050507, 0x090B0C0C, 0x05050507, 0x090B0C0C, 0x0206090D, 0x10101010, 
    }},
    {set:{//03 Preview ISO800
        0x000006E7, 0x000011A0, 0x092C28C8, 0x000008AC, 0x05050507, 0x090B0C0C, 0x05050507, 
        0x090B0C0C, 0x05050507, 0x090B0C0C, 0x05050507, 0x090B0C0C, 0x0206090D, 0x10101010, 
    }},
    {set:{//04 Preview ISO1600
        0x000006E7, 0x000011A0, 0x092D28C8, 0x000008AC, 0x05050507, 0x090B0C0C, 0x05050507, 
        0x090B0C0C, 0x05050507, 0x090B0C0C, 0x05050507, 0x090B0C0C, 0x0206090D, 0x10101010, 
    }},
    {set:{//05 Capture ISO100
        0x000006E7, 0x000011A0, 0x092328C8, 0x000008AC, 0x05050507, 0x090B0C0C, 0x05050507, 
        0x090B0C0C, 0x05050507, 0x090B0C0C, 0x05050507, 0x090B0C0C, 0x0206090D, 0x10101010, 
    }},
    {set:{//06 Capture ISO200
        0x000006E7, 0x000011A0, 0x092728C8, 0x000008AC, 0x05050507, 0x090B0C0C, 0x05050507, 
        0x090B0C0C, 0x05050507, 0x090B0C0C, 0x05050507, 0x090B0C0C, 0x0206090D, 0x10101010, 
    }},
    {set:{//07 Capture ISO400
        0x000006E7, 0x000011A0, 0x092928C8, 0x000008AC, 0x05050507, 0x090B0C0C, 0x05050507, 
        0x090B0C0C, 0x05050507, 0x090B0C0C, 0x05050507, 0x090B0C0C, 0x0206090D, 0x10101010, 
    }},
    {set:{//08 Capture ISO800
        0x000006E7, 0x000011A0, 0x092C28C8, 0x000008AC, 0x05050507, 0x090B0C0C, 0x05050507, 
        0x090B0C0C, 0x05050507, 0x090B0C0C, 0x05050507, 0x090B0C0C, 0x0206090D, 0x10101010, 
    }},
    {set:{//09 Capture IS1600
        0x000006E7, 0x000011A0, 0x092D28C8, 0x000008AC, 0x05050507, 0x090B0C0C, 0x05050507, 
        0x090B0C0C, 0x05050507, 0x090B0C0C, 0x05050507, 0x090B0C0C, 0x0206090D, 0x10101010, 
    }},
    {set:{//10 Disable (Do not modify me)
        0x000000C0, 0x000011A0, 0x094428A0, 0x000007AF, 0x03050709, 0x0B0D0F11, 0x03050709, 
        0x0B0D0F11, 0x03050709, 0x0B0D0F11, 0x03050709, 0x0B0D0F11, 0x0406090D, 0x10101010, 
    }}
        },
NR2:{
    {set:{//00 Preview ISO100
        0x00200002, 0x00009414, 0x00927788, 0x02030405, 0x0408080F, 0x02105182, 0x08080808, 0x10101010, 0x01AF5B58, 0x0000056B, 0x01020303, 
    }},
    {set:{//01 Preview ISO200
        0x00200002, 0x00009414, 0x00927788, 0x02030405, 0x0408080F, 0x02105182, 0x08080808, 0x10101010, 0x01AF5B58, 0x0000056B, 0x01020303, 
    }},
    {set:{//02 Preview ISO400
        0x00200002, 0x00009414, 0x00927788, 0x02030405, 0x0408080F, 0x02105182, 0x08080808, 0x10101010, 0x01AF5B58, 0x0000056B, 0x01020303, 
    }},
    {set:{//03 Preview ISO800
        0x00200003, 0x00009414, 0x00927788, 0x1320365A, 0x1321303F, 0x02106295, 0x08080808, 0x10101010, 0x01555B58, 0x00000555, 0x01020303, 
    }},
    {set:{//04 Preview ISO1600
        0x00200003, 0x00009414, 0x00927788, 0x1320365A, 0x1E324664, 0x02106B59, 0x08080808, 0x10101010, 0x01555B58, 0x00000555, 0x0914233E, 
    }},
    {set:{//05 Capture Mode0 ISO100
        0x00200002, 0x00009414, 0x00927788, 0x02030405, 0x0408080F, 0x02105182, 0x08080808, 0x10101010, 0x01AF5B58, 0x0000056B, 0x01020303, 
    }},
    {set:{//06 Capture Mode0 ISO200
        0x00200002, 0x00009414, 0x00927788, 0x02030405, 0x0408080F, 0x02105182, 0x08080808, 0x10101010, 0x01AF5B58, 0x0000056B, 0x01020303, 
    }},
    {set:{//07 Capture Mode0 ISO400
        0x00200002, 0x00009414, 0x00927788, 0x02030405, 0x0F1E2D3C, 0x02105182, 0x08080808, 0x10101010, 0x01AF5B58, 0x0000056B, 0x01020303, 
    }},
    {set:{//08 Capture Mode0 ISO800
        0x00200003, 0x00009414, 0x00927788, 0x02030405, 0x1321303F, 0x02106295, 0x08080808, 0x10101010, 0x01555B58, 0x00000555, 0x01020303, 
    }},
    {set:{//09 Capture Mode0 ISO1600
        0x00200003, 0x00009414, 0x00927788, 0x1320365A, 0x1E324664, 0x02106B59, 0x08080808, 0x10101010, 0x01555B58, 0x00000555, 0x0914233E, 
    }},
    {set:{//10 Capture Mode1 ISO100
        0x00210002, 0x00009414, 0x00927788, 0x02030405, 0x0408080F, 0x02105182, 0x08080808, 0x10101010, 0x01AF5B58, 0x0000056B, 0x01020303, 
    }},
    {set:{//11 Capture Mode1 ISO200
        0x00210002, 0x00009414, 0x00927788, 0x02030405, 0x0408080F, 0x02105182, 0x08080808, 0x10101010, 0x01AF5B58, 0x0000056B, 0x01020303, 
    }},
    {set:{//12 Capture Mode1 ISO400
        0x00210002, 0x00009414, 0x00927788, 0x02030405, 0x0F1E2D3C, 0x02105182, 0x08080808, 0x10101010, 0x01AF5B58, 0x0000056B, 0x01020303, 
    }},
    {set:{//13 Capture Mode1 ISO800
        0x00210003, 0x00009414, 0x00927788, 0x02030405, 0x1321303F, 0x02106295, 0x08080808, 0x10101010, 0x01555B58, 0x00000555, 0x01020303, 
    }},
    {set:{//14 Capture Mode1 ISO1600
        0x00210003, 0x00009414, 0x00927788, 0x1320365A, 0x1E324664, 0x02106B59, 0x08080808, 0x10101010, 0x01555B58, 0x00000555, 0x0914233E, 
    }},
    {set:{//15 Disable (Do not modify me)
        0x00000000, 0x0001FF01, 0x00523264, 0x04090B0F, 0x050A0B10, 0x02107294, 0x08101820, 0x10080604, 0x01AF5B43, 0x0000056B, 0x0306070A, 
    }}
},
EE:{// EE
    {set:{//00 Preview ISO100 (middle sharpness)
        0x00000008, 0x0032322D, 0x00140123, 0x0266183C, 0x0133F864, 0x0029FEDC, 0xFFFFFF0B, 
    }},
    {set:{//01 Preview ISO200 (middle sharpness)
        0x00000008, 0x0032322D, 0x00140123, 0x0266183C, 0x0133F864, 0x0029FEDC, 0xFFFFFF0B, 
    }},
    {set:{//02 Preview ISO400 (middle sharpness)
        0x00000008, 0x0032322D, 0x00140123, 0x0266183C, 0x0133F864, 0x0029FEDC, 0xFFFFFF0B, 
    }},
    {set:{//03 Preview ISO800 (middle sharpness)
        0x00000008, 0x0032322D, 0x00140123, 0x0266183C, 0x0133F864, 0x0029FEDC, 0xFFFFFF0B, 
    }},
    {set:{//04 Preview ISO1600 (middle sharpness)
        0x00000008, 0x0032322D, 0x00140123, 0x0266183C, 0x0133F864, 0x0029FEDC, 0xFFFFFF0B, 
    }},
    {set:{//05 Capture ISO100 (middle sharpness)
        0x00000008, 0x0032322D, 0x00140123, 0x0266183C, 0x0133F864, 0x0029FEDC, 0xFFFFFF0B, 
    }},
    {set:{//06 Capture ISO200 (middle sharpness)
        0x00000008, 0x0032322D, 0x00140123, 0x0266183C, 0x0133F864, 0x0029FEDC, 0xFFFFFF0B, 
    }},
    {set:{//07 Capture ISO400 (middle sharpness)
        0x00000008, 0x0032322D, 0x00140123, 0x0266183C, 0x0133F864, 0x0029FEDC, 0xFFFFFF0B, 
    }},
    {set:{//08 Capture ISO800 (middle sharpness)
        0x00000008, 0x0032322D, 0x00140123, 0x0266183C, 0x0133F864, 0x0029FEDC, 0xFFFFFF0B, 
    }},
    {set:{//09 Capture ISO1600 (middle sharpness)
        0x00000008, 0x0032322D, 0x00140123, 0x0266183C, 0x0133F864, 0x0029FEDC, 0xFFFFFF0B, 
    }},
    {set:{//10  no one uses this, this is Min EE (low sharpness)
        0x00000008, 0x0032322D, 0x00140123, 0x0266183C, 0x0133F864, 0x0029FEDC, 0xFFFFFF0B, 
    }},
    {set:{//11 no one uses this, this is Max EE (high sharpness)
        0x00000008, 0x0032322D, 0x00140123, 0x0266183C, 0x0133F864, 0x0029FEDC, 0xFFFFFF0B, 
    }}
            },
Saturation:{
    {set:{//00 (middle saturation)
        0x00000709, 0x1020E0F0, 0x28464C46, 0x28000000, 0xFF00FF00, 0x00000000, 0x00000000, 0x001E140A, 
    }},
    {set:{//01 (middle saturation)
        0x00000709, 0x1020E0F0, 0x20424442, 0x20000000, 0xFF00FF00, 0x00000000, 0x00000000, 0x001E140A, 
    }},
    {set:{//02 (middle saturation)
        0x00000709, 0x1020E0F0, 0x1E3C3C3C, 0x1E000000, 0xFF00FF00, 0x00000000, 0x00000000, 0x001E140A, 
    }},
    {set:{//03 (middle saturation)
        0x00000709, 0x1020E0F0, 0x1C383838, 0x1C000000, 0xFF00FF00, 0x00000000, 0x00000000, 0x001E140A, 
    }},
    {set:{//04 (middle saturation)
        0x00010709, 0x2850A0FF, 0x1A232D40, 0x40000000, 0xFF00FF00, 0x40302000, 0x00000000, 0x00783C1E, 
    }},
    {set:{//05 no one uses this, this is Min Sat. (low saturation)
        0x00010709, 0x2850A0FF, 0x1A232D40, 0x40000000, 0xFF00FF00, 0x40302000, 0x00000000, 0x00783C1E, 
    }},
    {set:{//06 no one uses this, this is Max Sat. (high saturation)
        0x00000709, 0x1020E0F0, 0x28464C46, 0x28000000, 0xFF00FF00, 0x00000000, 0x00000000, 0x001E140A, 
    }}
            },
Contrast:{
    //..........................................................................
    // low brightness
    {set:{//00 //  low contrast
        0x00000008, 0x00F00000, 0xFF00003B, 
    }},
    {set:{//01 //  middle contrast
        0x00000008, 0x00F00000, 0xFF000040, 
    }},
    {set:{//02 //  high contrast
        0x00000008, 0x00F00000, 0xFF000045, 
    }},
    //..........................................................................
    // middle brightness
    {set:{//03 //  low contrast
        0x00000008, 0x00000000, 0xFF00003B, 
    }},
    {set:{//04 //  middle contrast
        0x00000008, 0x00000000, 0xFF000040, 
    }},
    {set:{//05 //  high contrast
        0x00000008, 0x00000000, 0xFF000045, 
    }},
    //..........................................................................
    // high brightness
    {set:{//06 //  low contrast
        0x00000008, 0x000A0000, 0xFF00003B, 
    }},
    {set:{//07 //  middle contrast
        0x00000008, 0x000A0000, 0xFF000040, 
    }},
    {set:{//08 //  high contrast
        0x00000008, 0x000A0000, 0xFF000045, 
    }}
            },
Hue:{
    {set:{//00 // low hue
        0x00000002, 0x808062AE, 
    }},
    {set:{//01 // middle hue
        0x00000002, 0x00007F01, 
    }},
    {set:{//02 // high hue
        0x00000002, 0x80806252, 
    }}
},
CCM:{
    {set:{//00
        0x02200530, 0x00100428, 0x01480420, 0x00180490, 0x01780000, 
    }},
    {set:{//01
        0x02200530, 0x00100428, 0x01480420, 0x00180490, 0x01780000, 
    }},
    {set:{//02
        0x02200530, 0x00100428, 0x01480420, 0x00180490, 0x01780000, 
    }}
            },
Gamma:{
    {set:{//00
        0x3F1A0D03, 0x897C6C59, 0xBFB2A096, 0xE3DBD4CA, 0xFBF7F2EE, 
    }},
            }
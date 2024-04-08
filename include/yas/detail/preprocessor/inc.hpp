# /* Copyright (C) 2001
#  * Housemarque Oy
#  * http://www.housemarque.com
#  *
#  * Distributed under the Boost Software License, Version 1.0. (See
#  * accompanying file LICENSE_1_0.txt or copy at
#  * http://www.boost.org/LICENSE_1_0.txt)
#  */
#
# /* Revised by Paul Mensonides (2002) */
#
# /* See http://www.boost.org for most recent version. */
#
#ifndef __yas__detail__preprocessor__inc_hpp
#define __yas__detail__preprocessor__inc_hpp
#
# include "config.hpp"
#
# /* YAS_PP_INC */
#
# if ~YAS_PP_CONFIG_FLAGS() & YAS_PP_CONFIG_MWCC()
#    define YAS_PP_INC(x) YAS_PP_INC_I(x)
# else
#    define YAS_PP_INC(x) YAS_PP_INC_OO((x))
#    define YAS_PP_INC_OO(par) YAS_PP_INC_I ## par
# endif
#
# define YAS_PP_INC_I(x) YAS_PP_INC_ ## x
#
# define YAS_PP_INC_0 1
# define YAS_PP_INC_1 2
# define YAS_PP_INC_2 3
# define YAS_PP_INC_3 4
# define YAS_PP_INC_4 5
# define YAS_PP_INC_5 6
# define YAS_PP_INC_6 7
# define YAS_PP_INC_7 8
# define YAS_PP_INC_8 9
# define YAS_PP_INC_9 10
# define YAS_PP_INC_10 11
# define YAS_PP_INC_11 12
# define YAS_PP_INC_12 13
# define YAS_PP_INC_13 14
# define YAS_PP_INC_14 15
# define YAS_PP_INC_15 16
# define YAS_PP_INC_16 17
# define YAS_PP_INC_17 18
# define YAS_PP_INC_18 19
# define YAS_PP_INC_19 20
# define YAS_PP_INC_20 21
# define YAS_PP_INC_21 22
# define YAS_PP_INC_22 23
# define YAS_PP_INC_23 24
# define YAS_PP_INC_24 25
# define YAS_PP_INC_25 26
# define YAS_PP_INC_26 27
# define YAS_PP_INC_27 28
# define YAS_PP_INC_28 29
# define YAS_PP_INC_29 30
# define YAS_PP_INC_30 31
# define YAS_PP_INC_31 32
# define YAS_PP_INC_32 33
# define YAS_PP_INC_33 34
# define YAS_PP_INC_34 35
# define YAS_PP_INC_35 36
# define YAS_PP_INC_36 37
# define YAS_PP_INC_37 38
# define YAS_PP_INC_38 39
# define YAS_PP_INC_39 40
# define YAS_PP_INC_40 41
# define YAS_PP_INC_41 42
# define YAS_PP_INC_42 43
# define YAS_PP_INC_43 44
# define YAS_PP_INC_44 45
# define YAS_PP_INC_45 46
# define YAS_PP_INC_46 47
# define YAS_PP_INC_47 48
# define YAS_PP_INC_48 49
# define YAS_PP_INC_49 50
# define YAS_PP_INC_50 51
# define YAS_PP_INC_51 52
# define YAS_PP_INC_52 53
# define YAS_PP_INC_53 54
# define YAS_PP_INC_54 55
# define YAS_PP_INC_55 56
# define YAS_PP_INC_56 57
# define YAS_PP_INC_57 58
# define YAS_PP_INC_58 59
# define YAS_PP_INC_59 60
# define YAS_PP_INC_60 61
# define YAS_PP_INC_61 62
# define YAS_PP_INC_62 63
# define YAS_PP_INC_63 64
# define YAS_PP_INC_64 65
# define YAS_PP_INC_65 66
# define YAS_PP_INC_66 67
# define YAS_PP_INC_67 68
# define YAS_PP_INC_68 69
# define YAS_PP_INC_69 70
# define YAS_PP_INC_70 71
# define YAS_PP_INC_71 72
# define YAS_PP_INC_72 73
# define YAS_PP_INC_73 74
# define YAS_PP_INC_74 75
# define YAS_PP_INC_75 76
# define YAS_PP_INC_76 77
# define YAS_PP_INC_77 78
# define YAS_PP_INC_78 79
# define YAS_PP_INC_79 80
# define YAS_PP_INC_80 81
# define YAS_PP_INC_81 82
# define YAS_PP_INC_82 83
# define YAS_PP_INC_83 84
# define YAS_PP_INC_84 85
# define YAS_PP_INC_85 86
# define YAS_PP_INC_86 87
# define YAS_PP_INC_87 88
# define YAS_PP_INC_88 89
# define YAS_PP_INC_89 90
# define YAS_PP_INC_90 91
# define YAS_PP_INC_91 92
# define YAS_PP_INC_92 93
# define YAS_PP_INC_93 94
# define YAS_PP_INC_94 95
# define YAS_PP_INC_95 96
# define YAS_PP_INC_96 97
# define YAS_PP_INC_97 98
# define YAS_PP_INC_98 99
# define YAS_PP_INC_99 100
# define YAS_PP_INC_100 101
# define YAS_PP_INC_101 102
# define YAS_PP_INC_102 103
# define YAS_PP_INC_103 104
# define YAS_PP_INC_104 105
# define YAS_PP_INC_105 106
# define YAS_PP_INC_106 107
# define YAS_PP_INC_107 108
# define YAS_PP_INC_108 109
# define YAS_PP_INC_109 110
# define YAS_PP_INC_110 111
# define YAS_PP_INC_111 112
# define YAS_PP_INC_112 113
# define YAS_PP_INC_113 114
# define YAS_PP_INC_114 115
# define YAS_PP_INC_115 116
# define YAS_PP_INC_116 117
# define YAS_PP_INC_117 118
# define YAS_PP_INC_118 119
# define YAS_PP_INC_119 120
# define YAS_PP_INC_120 121
# define YAS_PP_INC_121 122
# define YAS_PP_INC_122 123
# define YAS_PP_INC_123 124
# define YAS_PP_INC_124 125
# define YAS_PP_INC_125 126
# define YAS_PP_INC_126 127
# define YAS_PP_INC_127 128
# define YAS_PP_INC_128 129
# define YAS_PP_INC_129 130
# define YAS_PP_INC_130 131
# define YAS_PP_INC_131 132
# define YAS_PP_INC_132 133
# define YAS_PP_INC_133 134
# define YAS_PP_INC_134 135
# define YAS_PP_INC_135 136
# define YAS_PP_INC_136 137
# define YAS_PP_INC_137 138
# define YAS_PP_INC_138 139
# define YAS_PP_INC_139 140
# define YAS_PP_INC_140 141
# define YAS_PP_INC_141 142
# define YAS_PP_INC_142 143
# define YAS_PP_INC_143 144
# define YAS_PP_INC_144 145
# define YAS_PP_INC_145 146
# define YAS_PP_INC_146 147
# define YAS_PP_INC_147 148
# define YAS_PP_INC_148 149
# define YAS_PP_INC_149 150
# define YAS_PP_INC_150 151
# define YAS_PP_INC_151 152
# define YAS_PP_INC_152 153
# define YAS_PP_INC_153 154
# define YAS_PP_INC_154 155
# define YAS_PP_INC_155 156
# define YAS_PP_INC_156 157
# define YAS_PP_INC_157 158
# define YAS_PP_INC_158 159
# define YAS_PP_INC_159 160
# define YAS_PP_INC_160 161
# define YAS_PP_INC_161 162
# define YAS_PP_INC_162 163
# define YAS_PP_INC_163 164
# define YAS_PP_INC_164 165
# define YAS_PP_INC_165 166
# define YAS_PP_INC_166 167
# define YAS_PP_INC_167 168
# define YAS_PP_INC_168 169
# define YAS_PP_INC_169 170
# define YAS_PP_INC_170 171
# define YAS_PP_INC_171 172
# define YAS_PP_INC_172 173
# define YAS_PP_INC_173 174
# define YAS_PP_INC_174 175
# define YAS_PP_INC_175 176
# define YAS_PP_INC_176 177
# define YAS_PP_INC_177 178
# define YAS_PP_INC_178 179
# define YAS_PP_INC_179 180
# define YAS_PP_INC_180 181
# define YAS_PP_INC_181 182
# define YAS_PP_INC_182 183
# define YAS_PP_INC_183 184
# define YAS_PP_INC_184 185
# define YAS_PP_INC_185 186
# define YAS_PP_INC_186 187
# define YAS_PP_INC_187 188
# define YAS_PP_INC_188 189
# define YAS_PP_INC_189 190
# define YAS_PP_INC_190 191
# define YAS_PP_INC_191 192
# define YAS_PP_INC_192 193
# define YAS_PP_INC_193 194
# define YAS_PP_INC_194 195
# define YAS_PP_INC_195 196
# define YAS_PP_INC_196 197
# define YAS_PP_INC_197 198
# define YAS_PP_INC_198 199
# define YAS_PP_INC_199 200
# define YAS_PP_INC_200 201
# define YAS_PP_INC_201 202
# define YAS_PP_INC_202 203
# define YAS_PP_INC_203 204
# define YAS_PP_INC_204 205
# define YAS_PP_INC_205 206
# define YAS_PP_INC_206 207
# define YAS_PP_INC_207 208
# define YAS_PP_INC_208 209
# define YAS_PP_INC_209 210
# define YAS_PP_INC_210 211
# define YAS_PP_INC_211 212
# define YAS_PP_INC_212 213
# define YAS_PP_INC_213 214
# define YAS_PP_INC_214 215
# define YAS_PP_INC_215 216
# define YAS_PP_INC_216 217
# define YAS_PP_INC_217 218
# define YAS_PP_INC_218 219
# define YAS_PP_INC_219 220
# define YAS_PP_INC_220 221
# define YAS_PP_INC_221 222
# define YAS_PP_INC_222 223
# define YAS_PP_INC_223 224
# define YAS_PP_INC_224 225
# define YAS_PP_INC_225 226
# define YAS_PP_INC_226 227
# define YAS_PP_INC_227 228
# define YAS_PP_INC_228 229
# define YAS_PP_INC_229 230
# define YAS_PP_INC_230 231
# define YAS_PP_INC_231 232
# define YAS_PP_INC_232 233
# define YAS_PP_INC_233 234
# define YAS_PP_INC_234 235
# define YAS_PP_INC_235 236
# define YAS_PP_INC_236 237
# define YAS_PP_INC_237 238
# define YAS_PP_INC_238 239
# define YAS_PP_INC_239 240
# define YAS_PP_INC_240 241
# define YAS_PP_INC_241 242
# define YAS_PP_INC_242 243
# define YAS_PP_INC_243 244
# define YAS_PP_INC_244 245
# define YAS_PP_INC_245 246
# define YAS_PP_INC_246 247
# define YAS_PP_INC_247 248
# define YAS_PP_INC_248 249
# define YAS_PP_INC_249 250
# define YAS_PP_INC_250 251
# define YAS_PP_INC_251 252
# define YAS_PP_INC_252 253
# define YAS_PP_INC_253 254
# define YAS_PP_INC_254 255
# define YAS_PP_INC_255 256
# define YAS_PP_INC_256 256
#
#endif // __yas__detail__preprocessor__inc_hpp

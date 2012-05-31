# /* **************************************************************************
#  *                                                                          *
#  *     (C) Copyright Paul Mensonides 2002.
#  *     Distributed under the Boost Software License, Version 1.0. (See
#  *     accompanying file LICENSE_1_0.txt or copy at
#  *     http://www.boost.org/LICENSE_1_0.txt)
#  *                                                                          *
#  ************************************************************************** */
#
# /* See http://www.boost.org for most recent version. */
#
# ifndef YAS_PREPROCESSOR_SEQ_SIZE_HPP
# define YAS_PREPROCESSOR_SEQ_SIZE_HPP
#
# include <yas/detail/boost_preprocessor/cat.hpp>
# include <yas/detail/boost_preprocessor/config.hpp>
#
# if YAS_PP_CONFIG_FLAGS() & YAS_PP_CONFIG_MWCC()
#    define YAS_PP_SEQ_SIZE(seq) YAS_PP_SEQ_SIZE_I((seq))
#    define YAS_PP_SEQ_SIZE_I(par) YAS_PP_SEQ_SIZE_II ## par
#    define YAS_PP_SEQ_SIZE_II(seq) YAS_PP_CAT(YAS_PP_SEQ_SIZE_, YAS_PP_SEQ_SIZE_0 ## seq)
# elif YAS_PP_CONFIG_FLAGS() & YAS_PP_CONFIG_EDG() || YAS_PP_CONFIG_FLAGS() & YAS_PP_CONFIG_MSVC()
#    define YAS_PP_SEQ_SIZE(seq) YAS_PP_SEQ_SIZE_I(seq)
#    define YAS_PP_SEQ_SIZE_I(seq) YAS_PP_CAT(YAS_PP_SEQ_SIZE_, YAS_PP_SEQ_SIZE_0 seq)
# elif defined(__IBMC__) || defined(__IBMCPP__)
#    define YAS_PP_SEQ_SIZE(seq) YAS_PP_CAT(YAS_PP_SEQ_SIZE_, YAS_PP_CAT(YAS_PP_SEQ_SIZE_0, seq))
# else
#    define YAS_PP_SEQ_SIZE(seq) YAS_PP_CAT(YAS_PP_SEQ_SIZE_, YAS_PP_SEQ_SIZE_0 seq)
# endif
#
# define YAS_PP_SEQ_SIZE_0(_) YAS_PP_SEQ_SIZE_1
# define YAS_PP_SEQ_SIZE_1(_) YAS_PP_SEQ_SIZE_2
# define YAS_PP_SEQ_SIZE_2(_) YAS_PP_SEQ_SIZE_3
# define YAS_PP_SEQ_SIZE_3(_) YAS_PP_SEQ_SIZE_4
# define YAS_PP_SEQ_SIZE_4(_) YAS_PP_SEQ_SIZE_5
# define YAS_PP_SEQ_SIZE_5(_) YAS_PP_SEQ_SIZE_6
# define YAS_PP_SEQ_SIZE_6(_) YAS_PP_SEQ_SIZE_7
# define YAS_PP_SEQ_SIZE_7(_) YAS_PP_SEQ_SIZE_8
# define YAS_PP_SEQ_SIZE_8(_) YAS_PP_SEQ_SIZE_9
# define YAS_PP_SEQ_SIZE_9(_) YAS_PP_SEQ_SIZE_10
# define YAS_PP_SEQ_SIZE_10(_) YAS_PP_SEQ_SIZE_11
# define YAS_PP_SEQ_SIZE_11(_) YAS_PP_SEQ_SIZE_12
# define YAS_PP_SEQ_SIZE_12(_) YAS_PP_SEQ_SIZE_13
# define YAS_PP_SEQ_SIZE_13(_) YAS_PP_SEQ_SIZE_14
# define YAS_PP_SEQ_SIZE_14(_) YAS_PP_SEQ_SIZE_15
# define YAS_PP_SEQ_SIZE_15(_) YAS_PP_SEQ_SIZE_16
# define YAS_PP_SEQ_SIZE_16(_) YAS_PP_SEQ_SIZE_17
# define YAS_PP_SEQ_SIZE_17(_) YAS_PP_SEQ_SIZE_18
# define YAS_PP_SEQ_SIZE_18(_) YAS_PP_SEQ_SIZE_19
# define YAS_PP_SEQ_SIZE_19(_) YAS_PP_SEQ_SIZE_20
# define YAS_PP_SEQ_SIZE_20(_) YAS_PP_SEQ_SIZE_21
# define YAS_PP_SEQ_SIZE_21(_) YAS_PP_SEQ_SIZE_22
# define YAS_PP_SEQ_SIZE_22(_) YAS_PP_SEQ_SIZE_23
# define YAS_PP_SEQ_SIZE_23(_) YAS_PP_SEQ_SIZE_24
# define YAS_PP_SEQ_SIZE_24(_) YAS_PP_SEQ_SIZE_25
# define YAS_PP_SEQ_SIZE_25(_) YAS_PP_SEQ_SIZE_26
# define YAS_PP_SEQ_SIZE_26(_) YAS_PP_SEQ_SIZE_27
# define YAS_PP_SEQ_SIZE_27(_) YAS_PP_SEQ_SIZE_28
# define YAS_PP_SEQ_SIZE_28(_) YAS_PP_SEQ_SIZE_29
# define YAS_PP_SEQ_SIZE_29(_) YAS_PP_SEQ_SIZE_30
# define YAS_PP_SEQ_SIZE_30(_) YAS_PP_SEQ_SIZE_31
# define YAS_PP_SEQ_SIZE_31(_) YAS_PP_SEQ_SIZE_32
# define YAS_PP_SEQ_SIZE_32(_) YAS_PP_SEQ_SIZE_33
# define YAS_PP_SEQ_SIZE_33(_) YAS_PP_SEQ_SIZE_34
# define YAS_PP_SEQ_SIZE_34(_) YAS_PP_SEQ_SIZE_35
# define YAS_PP_SEQ_SIZE_35(_) YAS_PP_SEQ_SIZE_36
# define YAS_PP_SEQ_SIZE_36(_) YAS_PP_SEQ_SIZE_37
# define YAS_PP_SEQ_SIZE_37(_) YAS_PP_SEQ_SIZE_38
# define YAS_PP_SEQ_SIZE_38(_) YAS_PP_SEQ_SIZE_39
# define YAS_PP_SEQ_SIZE_39(_) YAS_PP_SEQ_SIZE_40
# define YAS_PP_SEQ_SIZE_40(_) YAS_PP_SEQ_SIZE_41
# define YAS_PP_SEQ_SIZE_41(_) YAS_PP_SEQ_SIZE_42
# define YAS_PP_SEQ_SIZE_42(_) YAS_PP_SEQ_SIZE_43
# define YAS_PP_SEQ_SIZE_43(_) YAS_PP_SEQ_SIZE_44
# define YAS_PP_SEQ_SIZE_44(_) YAS_PP_SEQ_SIZE_45
# define YAS_PP_SEQ_SIZE_45(_) YAS_PP_SEQ_SIZE_46
# define YAS_PP_SEQ_SIZE_46(_) YAS_PP_SEQ_SIZE_47
# define YAS_PP_SEQ_SIZE_47(_) YAS_PP_SEQ_SIZE_48
# define YAS_PP_SEQ_SIZE_48(_) YAS_PP_SEQ_SIZE_49
# define YAS_PP_SEQ_SIZE_49(_) YAS_PP_SEQ_SIZE_50
# define YAS_PP_SEQ_SIZE_50(_) YAS_PP_SEQ_SIZE_51
# define YAS_PP_SEQ_SIZE_51(_) YAS_PP_SEQ_SIZE_52
# define YAS_PP_SEQ_SIZE_52(_) YAS_PP_SEQ_SIZE_53
# define YAS_PP_SEQ_SIZE_53(_) YAS_PP_SEQ_SIZE_54
# define YAS_PP_SEQ_SIZE_54(_) YAS_PP_SEQ_SIZE_55
# define YAS_PP_SEQ_SIZE_55(_) YAS_PP_SEQ_SIZE_56
# define YAS_PP_SEQ_SIZE_56(_) YAS_PP_SEQ_SIZE_57
# define YAS_PP_SEQ_SIZE_57(_) YAS_PP_SEQ_SIZE_58
# define YAS_PP_SEQ_SIZE_58(_) YAS_PP_SEQ_SIZE_59
# define YAS_PP_SEQ_SIZE_59(_) YAS_PP_SEQ_SIZE_60
# define YAS_PP_SEQ_SIZE_60(_) YAS_PP_SEQ_SIZE_61
# define YAS_PP_SEQ_SIZE_61(_) YAS_PP_SEQ_SIZE_62
# define YAS_PP_SEQ_SIZE_62(_) YAS_PP_SEQ_SIZE_63
# define YAS_PP_SEQ_SIZE_63(_) YAS_PP_SEQ_SIZE_64
# define YAS_PP_SEQ_SIZE_64(_) YAS_PP_SEQ_SIZE_65
# define YAS_PP_SEQ_SIZE_65(_) YAS_PP_SEQ_SIZE_66
# define YAS_PP_SEQ_SIZE_66(_) YAS_PP_SEQ_SIZE_67
# define YAS_PP_SEQ_SIZE_67(_) YAS_PP_SEQ_SIZE_68
# define YAS_PP_SEQ_SIZE_68(_) YAS_PP_SEQ_SIZE_69
# define YAS_PP_SEQ_SIZE_69(_) YAS_PP_SEQ_SIZE_70
# define YAS_PP_SEQ_SIZE_70(_) YAS_PP_SEQ_SIZE_71
# define YAS_PP_SEQ_SIZE_71(_) YAS_PP_SEQ_SIZE_72
# define YAS_PP_SEQ_SIZE_72(_) YAS_PP_SEQ_SIZE_73
# define YAS_PP_SEQ_SIZE_73(_) YAS_PP_SEQ_SIZE_74
# define YAS_PP_SEQ_SIZE_74(_) YAS_PP_SEQ_SIZE_75
# define YAS_PP_SEQ_SIZE_75(_) YAS_PP_SEQ_SIZE_76
# define YAS_PP_SEQ_SIZE_76(_) YAS_PP_SEQ_SIZE_77
# define YAS_PP_SEQ_SIZE_77(_) YAS_PP_SEQ_SIZE_78
# define YAS_PP_SEQ_SIZE_78(_) YAS_PP_SEQ_SIZE_79
# define YAS_PP_SEQ_SIZE_79(_) YAS_PP_SEQ_SIZE_80
# define YAS_PP_SEQ_SIZE_80(_) YAS_PP_SEQ_SIZE_81
# define YAS_PP_SEQ_SIZE_81(_) YAS_PP_SEQ_SIZE_82
# define YAS_PP_SEQ_SIZE_82(_) YAS_PP_SEQ_SIZE_83
# define YAS_PP_SEQ_SIZE_83(_) YAS_PP_SEQ_SIZE_84
# define YAS_PP_SEQ_SIZE_84(_) YAS_PP_SEQ_SIZE_85
# define YAS_PP_SEQ_SIZE_85(_) YAS_PP_SEQ_SIZE_86
# define YAS_PP_SEQ_SIZE_86(_) YAS_PP_SEQ_SIZE_87
# define YAS_PP_SEQ_SIZE_87(_) YAS_PP_SEQ_SIZE_88
# define YAS_PP_SEQ_SIZE_88(_) YAS_PP_SEQ_SIZE_89
# define YAS_PP_SEQ_SIZE_89(_) YAS_PP_SEQ_SIZE_90
# define YAS_PP_SEQ_SIZE_90(_) YAS_PP_SEQ_SIZE_91
# define YAS_PP_SEQ_SIZE_91(_) YAS_PP_SEQ_SIZE_92
# define YAS_PP_SEQ_SIZE_92(_) YAS_PP_SEQ_SIZE_93
# define YAS_PP_SEQ_SIZE_93(_) YAS_PP_SEQ_SIZE_94
# define YAS_PP_SEQ_SIZE_94(_) YAS_PP_SEQ_SIZE_95
# define YAS_PP_SEQ_SIZE_95(_) YAS_PP_SEQ_SIZE_96
# define YAS_PP_SEQ_SIZE_96(_) YAS_PP_SEQ_SIZE_97
# define YAS_PP_SEQ_SIZE_97(_) YAS_PP_SEQ_SIZE_98
# define YAS_PP_SEQ_SIZE_98(_) YAS_PP_SEQ_SIZE_99
# define YAS_PP_SEQ_SIZE_99(_) YAS_PP_SEQ_SIZE_100
# define YAS_PP_SEQ_SIZE_100(_) YAS_PP_SEQ_SIZE_101
# define YAS_PP_SEQ_SIZE_101(_) YAS_PP_SEQ_SIZE_102
# define YAS_PP_SEQ_SIZE_102(_) YAS_PP_SEQ_SIZE_103
# define YAS_PP_SEQ_SIZE_103(_) YAS_PP_SEQ_SIZE_104
# define YAS_PP_SEQ_SIZE_104(_) YAS_PP_SEQ_SIZE_105
# define YAS_PP_SEQ_SIZE_105(_) YAS_PP_SEQ_SIZE_106
# define YAS_PP_SEQ_SIZE_106(_) YAS_PP_SEQ_SIZE_107
# define YAS_PP_SEQ_SIZE_107(_) YAS_PP_SEQ_SIZE_108
# define YAS_PP_SEQ_SIZE_108(_) YAS_PP_SEQ_SIZE_109
# define YAS_PP_SEQ_SIZE_109(_) YAS_PP_SEQ_SIZE_110
# define YAS_PP_SEQ_SIZE_110(_) YAS_PP_SEQ_SIZE_111
# define YAS_PP_SEQ_SIZE_111(_) YAS_PP_SEQ_SIZE_112
# define YAS_PP_SEQ_SIZE_112(_) YAS_PP_SEQ_SIZE_113
# define YAS_PP_SEQ_SIZE_113(_) YAS_PP_SEQ_SIZE_114
# define YAS_PP_SEQ_SIZE_114(_) YAS_PP_SEQ_SIZE_115
# define YAS_PP_SEQ_SIZE_115(_) YAS_PP_SEQ_SIZE_116
# define YAS_PP_SEQ_SIZE_116(_) YAS_PP_SEQ_SIZE_117
# define YAS_PP_SEQ_SIZE_117(_) YAS_PP_SEQ_SIZE_118
# define YAS_PP_SEQ_SIZE_118(_) YAS_PP_SEQ_SIZE_119
# define YAS_PP_SEQ_SIZE_119(_) YAS_PP_SEQ_SIZE_120
# define YAS_PP_SEQ_SIZE_120(_) YAS_PP_SEQ_SIZE_121
# define YAS_PP_SEQ_SIZE_121(_) YAS_PP_SEQ_SIZE_122
# define YAS_PP_SEQ_SIZE_122(_) YAS_PP_SEQ_SIZE_123
# define YAS_PP_SEQ_SIZE_123(_) YAS_PP_SEQ_SIZE_124
# define YAS_PP_SEQ_SIZE_124(_) YAS_PP_SEQ_SIZE_125
# define YAS_PP_SEQ_SIZE_125(_) YAS_PP_SEQ_SIZE_126
# define YAS_PP_SEQ_SIZE_126(_) YAS_PP_SEQ_SIZE_127
# define YAS_PP_SEQ_SIZE_127(_) YAS_PP_SEQ_SIZE_128
# define YAS_PP_SEQ_SIZE_128(_) YAS_PP_SEQ_SIZE_129
# define YAS_PP_SEQ_SIZE_129(_) YAS_PP_SEQ_SIZE_130
# define YAS_PP_SEQ_SIZE_130(_) YAS_PP_SEQ_SIZE_131
# define YAS_PP_SEQ_SIZE_131(_) YAS_PP_SEQ_SIZE_132
# define YAS_PP_SEQ_SIZE_132(_) YAS_PP_SEQ_SIZE_133
# define YAS_PP_SEQ_SIZE_133(_) YAS_PP_SEQ_SIZE_134
# define YAS_PP_SEQ_SIZE_134(_) YAS_PP_SEQ_SIZE_135
# define YAS_PP_SEQ_SIZE_135(_) YAS_PP_SEQ_SIZE_136
# define YAS_PP_SEQ_SIZE_136(_) YAS_PP_SEQ_SIZE_137
# define YAS_PP_SEQ_SIZE_137(_) YAS_PP_SEQ_SIZE_138
# define YAS_PP_SEQ_SIZE_138(_) YAS_PP_SEQ_SIZE_139
# define YAS_PP_SEQ_SIZE_139(_) YAS_PP_SEQ_SIZE_140
# define YAS_PP_SEQ_SIZE_140(_) YAS_PP_SEQ_SIZE_141
# define YAS_PP_SEQ_SIZE_141(_) YAS_PP_SEQ_SIZE_142
# define YAS_PP_SEQ_SIZE_142(_) YAS_PP_SEQ_SIZE_143
# define YAS_PP_SEQ_SIZE_143(_) YAS_PP_SEQ_SIZE_144
# define YAS_PP_SEQ_SIZE_144(_) YAS_PP_SEQ_SIZE_145
# define YAS_PP_SEQ_SIZE_145(_) YAS_PP_SEQ_SIZE_146
# define YAS_PP_SEQ_SIZE_146(_) YAS_PP_SEQ_SIZE_147
# define YAS_PP_SEQ_SIZE_147(_) YAS_PP_SEQ_SIZE_148
# define YAS_PP_SEQ_SIZE_148(_) YAS_PP_SEQ_SIZE_149
# define YAS_PP_SEQ_SIZE_149(_) YAS_PP_SEQ_SIZE_150
# define YAS_PP_SEQ_SIZE_150(_) YAS_PP_SEQ_SIZE_151
# define YAS_PP_SEQ_SIZE_151(_) YAS_PP_SEQ_SIZE_152
# define YAS_PP_SEQ_SIZE_152(_) YAS_PP_SEQ_SIZE_153
# define YAS_PP_SEQ_SIZE_153(_) YAS_PP_SEQ_SIZE_154
# define YAS_PP_SEQ_SIZE_154(_) YAS_PP_SEQ_SIZE_155
# define YAS_PP_SEQ_SIZE_155(_) YAS_PP_SEQ_SIZE_156
# define YAS_PP_SEQ_SIZE_156(_) YAS_PP_SEQ_SIZE_157
# define YAS_PP_SEQ_SIZE_157(_) YAS_PP_SEQ_SIZE_158
# define YAS_PP_SEQ_SIZE_158(_) YAS_PP_SEQ_SIZE_159
# define YAS_PP_SEQ_SIZE_159(_) YAS_PP_SEQ_SIZE_160
# define YAS_PP_SEQ_SIZE_160(_) YAS_PP_SEQ_SIZE_161
# define YAS_PP_SEQ_SIZE_161(_) YAS_PP_SEQ_SIZE_162
# define YAS_PP_SEQ_SIZE_162(_) YAS_PP_SEQ_SIZE_163
# define YAS_PP_SEQ_SIZE_163(_) YAS_PP_SEQ_SIZE_164
# define YAS_PP_SEQ_SIZE_164(_) YAS_PP_SEQ_SIZE_165
# define YAS_PP_SEQ_SIZE_165(_) YAS_PP_SEQ_SIZE_166
# define YAS_PP_SEQ_SIZE_166(_) YAS_PP_SEQ_SIZE_167
# define YAS_PP_SEQ_SIZE_167(_) YAS_PP_SEQ_SIZE_168
# define YAS_PP_SEQ_SIZE_168(_) YAS_PP_SEQ_SIZE_169
# define YAS_PP_SEQ_SIZE_169(_) YAS_PP_SEQ_SIZE_170
# define YAS_PP_SEQ_SIZE_170(_) YAS_PP_SEQ_SIZE_171
# define YAS_PP_SEQ_SIZE_171(_) YAS_PP_SEQ_SIZE_172
# define YAS_PP_SEQ_SIZE_172(_) YAS_PP_SEQ_SIZE_173
# define YAS_PP_SEQ_SIZE_173(_) YAS_PP_SEQ_SIZE_174
# define YAS_PP_SEQ_SIZE_174(_) YAS_PP_SEQ_SIZE_175
# define YAS_PP_SEQ_SIZE_175(_) YAS_PP_SEQ_SIZE_176
# define YAS_PP_SEQ_SIZE_176(_) YAS_PP_SEQ_SIZE_177
# define YAS_PP_SEQ_SIZE_177(_) YAS_PP_SEQ_SIZE_178
# define YAS_PP_SEQ_SIZE_178(_) YAS_PP_SEQ_SIZE_179
# define YAS_PP_SEQ_SIZE_179(_) YAS_PP_SEQ_SIZE_180
# define YAS_PP_SEQ_SIZE_180(_) YAS_PP_SEQ_SIZE_181
# define YAS_PP_SEQ_SIZE_181(_) YAS_PP_SEQ_SIZE_182
# define YAS_PP_SEQ_SIZE_182(_) YAS_PP_SEQ_SIZE_183
# define YAS_PP_SEQ_SIZE_183(_) YAS_PP_SEQ_SIZE_184
# define YAS_PP_SEQ_SIZE_184(_) YAS_PP_SEQ_SIZE_185
# define YAS_PP_SEQ_SIZE_185(_) YAS_PP_SEQ_SIZE_186
# define YAS_PP_SEQ_SIZE_186(_) YAS_PP_SEQ_SIZE_187
# define YAS_PP_SEQ_SIZE_187(_) YAS_PP_SEQ_SIZE_188
# define YAS_PP_SEQ_SIZE_188(_) YAS_PP_SEQ_SIZE_189
# define YAS_PP_SEQ_SIZE_189(_) YAS_PP_SEQ_SIZE_190
# define YAS_PP_SEQ_SIZE_190(_) YAS_PP_SEQ_SIZE_191
# define YAS_PP_SEQ_SIZE_191(_) YAS_PP_SEQ_SIZE_192
# define YAS_PP_SEQ_SIZE_192(_) YAS_PP_SEQ_SIZE_193
# define YAS_PP_SEQ_SIZE_193(_) YAS_PP_SEQ_SIZE_194
# define YAS_PP_SEQ_SIZE_194(_) YAS_PP_SEQ_SIZE_195
# define YAS_PP_SEQ_SIZE_195(_) YAS_PP_SEQ_SIZE_196
# define YAS_PP_SEQ_SIZE_196(_) YAS_PP_SEQ_SIZE_197
# define YAS_PP_SEQ_SIZE_197(_) YAS_PP_SEQ_SIZE_198
# define YAS_PP_SEQ_SIZE_198(_) YAS_PP_SEQ_SIZE_199
# define YAS_PP_SEQ_SIZE_199(_) YAS_PP_SEQ_SIZE_200
# define YAS_PP_SEQ_SIZE_200(_) YAS_PP_SEQ_SIZE_201
# define YAS_PP_SEQ_SIZE_201(_) YAS_PP_SEQ_SIZE_202
# define YAS_PP_SEQ_SIZE_202(_) YAS_PP_SEQ_SIZE_203
# define YAS_PP_SEQ_SIZE_203(_) YAS_PP_SEQ_SIZE_204
# define YAS_PP_SEQ_SIZE_204(_) YAS_PP_SEQ_SIZE_205
# define YAS_PP_SEQ_SIZE_205(_) YAS_PP_SEQ_SIZE_206
# define YAS_PP_SEQ_SIZE_206(_) YAS_PP_SEQ_SIZE_207
# define YAS_PP_SEQ_SIZE_207(_) YAS_PP_SEQ_SIZE_208
# define YAS_PP_SEQ_SIZE_208(_) YAS_PP_SEQ_SIZE_209
# define YAS_PP_SEQ_SIZE_209(_) YAS_PP_SEQ_SIZE_210
# define YAS_PP_SEQ_SIZE_210(_) YAS_PP_SEQ_SIZE_211
# define YAS_PP_SEQ_SIZE_211(_) YAS_PP_SEQ_SIZE_212
# define YAS_PP_SEQ_SIZE_212(_) YAS_PP_SEQ_SIZE_213
# define YAS_PP_SEQ_SIZE_213(_) YAS_PP_SEQ_SIZE_214
# define YAS_PP_SEQ_SIZE_214(_) YAS_PP_SEQ_SIZE_215
# define YAS_PP_SEQ_SIZE_215(_) YAS_PP_SEQ_SIZE_216
# define YAS_PP_SEQ_SIZE_216(_) YAS_PP_SEQ_SIZE_217
# define YAS_PP_SEQ_SIZE_217(_) YAS_PP_SEQ_SIZE_218
# define YAS_PP_SEQ_SIZE_218(_) YAS_PP_SEQ_SIZE_219
# define YAS_PP_SEQ_SIZE_219(_) YAS_PP_SEQ_SIZE_220
# define YAS_PP_SEQ_SIZE_220(_) YAS_PP_SEQ_SIZE_221
# define YAS_PP_SEQ_SIZE_221(_) YAS_PP_SEQ_SIZE_222
# define YAS_PP_SEQ_SIZE_222(_) YAS_PP_SEQ_SIZE_223
# define YAS_PP_SEQ_SIZE_223(_) YAS_PP_SEQ_SIZE_224
# define YAS_PP_SEQ_SIZE_224(_) YAS_PP_SEQ_SIZE_225
# define YAS_PP_SEQ_SIZE_225(_) YAS_PP_SEQ_SIZE_226
# define YAS_PP_SEQ_SIZE_226(_) YAS_PP_SEQ_SIZE_227
# define YAS_PP_SEQ_SIZE_227(_) YAS_PP_SEQ_SIZE_228
# define YAS_PP_SEQ_SIZE_228(_) YAS_PP_SEQ_SIZE_229
# define YAS_PP_SEQ_SIZE_229(_) YAS_PP_SEQ_SIZE_230
# define YAS_PP_SEQ_SIZE_230(_) YAS_PP_SEQ_SIZE_231
# define YAS_PP_SEQ_SIZE_231(_) YAS_PP_SEQ_SIZE_232
# define YAS_PP_SEQ_SIZE_232(_) YAS_PP_SEQ_SIZE_233
# define YAS_PP_SEQ_SIZE_233(_) YAS_PP_SEQ_SIZE_234
# define YAS_PP_SEQ_SIZE_234(_) YAS_PP_SEQ_SIZE_235
# define YAS_PP_SEQ_SIZE_235(_) YAS_PP_SEQ_SIZE_236
# define YAS_PP_SEQ_SIZE_236(_) YAS_PP_SEQ_SIZE_237
# define YAS_PP_SEQ_SIZE_237(_) YAS_PP_SEQ_SIZE_238
# define YAS_PP_SEQ_SIZE_238(_) YAS_PP_SEQ_SIZE_239
# define YAS_PP_SEQ_SIZE_239(_) YAS_PP_SEQ_SIZE_240
# define YAS_PP_SEQ_SIZE_240(_) YAS_PP_SEQ_SIZE_241
# define YAS_PP_SEQ_SIZE_241(_) YAS_PP_SEQ_SIZE_242
# define YAS_PP_SEQ_SIZE_242(_) YAS_PP_SEQ_SIZE_243
# define YAS_PP_SEQ_SIZE_243(_) YAS_PP_SEQ_SIZE_244
# define YAS_PP_SEQ_SIZE_244(_) YAS_PP_SEQ_SIZE_245
# define YAS_PP_SEQ_SIZE_245(_) YAS_PP_SEQ_SIZE_246
# define YAS_PP_SEQ_SIZE_246(_) YAS_PP_SEQ_SIZE_247
# define YAS_PP_SEQ_SIZE_247(_) YAS_PP_SEQ_SIZE_248
# define YAS_PP_SEQ_SIZE_248(_) YAS_PP_SEQ_SIZE_249
# define YAS_PP_SEQ_SIZE_249(_) YAS_PP_SEQ_SIZE_250
# define YAS_PP_SEQ_SIZE_250(_) YAS_PP_SEQ_SIZE_251
# define YAS_PP_SEQ_SIZE_251(_) YAS_PP_SEQ_SIZE_252
# define YAS_PP_SEQ_SIZE_252(_) YAS_PP_SEQ_SIZE_253
# define YAS_PP_SEQ_SIZE_253(_) YAS_PP_SEQ_SIZE_254
# define YAS_PP_SEQ_SIZE_254(_) YAS_PP_SEQ_SIZE_255
# define YAS_PP_SEQ_SIZE_255(_) YAS_PP_SEQ_SIZE_256
# define YAS_PP_SEQ_SIZE_256(_) YAS_PP_SEQ_SIZE_257
#
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_0 0
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_1 1
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_2 2
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_3 3
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_4 4
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_5 5
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_6 6
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_7 7
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_8 8
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_9 9
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_10 10
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_11 11
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_12 12
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_13 13
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_14 14
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_15 15
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_16 16
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_17 17
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_18 18
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_19 19
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_20 20
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_21 21
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_22 22
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_23 23
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_24 24
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_25 25
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_26 26
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_27 27
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_28 28
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_29 29
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_30 30
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_31 31
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_32 32
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_33 33
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_34 34
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_35 35
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_36 36
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_37 37
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_38 38
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_39 39
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_40 40
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_41 41
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_42 42
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_43 43
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_44 44
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_45 45
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_46 46
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_47 47
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_48 48
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_49 49
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_50 50
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_51 51
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_52 52
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_53 53
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_54 54
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_55 55
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_56 56
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_57 57
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_58 58
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_59 59
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_60 60
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_61 61
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_62 62
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_63 63
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_64 64
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_65 65
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_66 66
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_67 67
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_68 68
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_69 69
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_70 70
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_71 71
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_72 72
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_73 73
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_74 74
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_75 75
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_76 76
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_77 77
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_78 78
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_79 79
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_80 80
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_81 81
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_82 82
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_83 83
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_84 84
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_85 85
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_86 86
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_87 87
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_88 88
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_89 89
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_90 90
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_91 91
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_92 92
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_93 93
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_94 94
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_95 95
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_96 96
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_97 97
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_98 98
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_99 99
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_100 100
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_101 101
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_102 102
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_103 103
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_104 104
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_105 105
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_106 106
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_107 107
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_108 108
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_109 109
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_110 110
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_111 111
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_112 112
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_113 113
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_114 114
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_115 115
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_116 116
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_117 117
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_118 118
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_119 119
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_120 120
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_121 121
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_122 122
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_123 123
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_124 124
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_125 125
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_126 126
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_127 127
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_128 128
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_129 129
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_130 130
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_131 131
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_132 132
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_133 133
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_134 134
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_135 135
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_136 136
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_137 137
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_138 138
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_139 139
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_140 140
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_141 141
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_142 142
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_143 143
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_144 144
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_145 145
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_146 146
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_147 147
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_148 148
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_149 149
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_150 150
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_151 151
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_152 152
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_153 153
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_154 154
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_155 155
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_156 156
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_157 157
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_158 158
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_159 159
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_160 160
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_161 161
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_162 162
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_163 163
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_164 164
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_165 165
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_166 166
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_167 167
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_168 168
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_169 169
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_170 170
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_171 171
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_172 172
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_173 173
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_174 174
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_175 175
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_176 176
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_177 177
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_178 178
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_179 179
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_180 180
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_181 181
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_182 182
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_183 183
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_184 184
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_185 185
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_186 186
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_187 187
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_188 188
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_189 189
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_190 190
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_191 191
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_192 192
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_193 193
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_194 194
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_195 195
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_196 196
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_197 197
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_198 198
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_199 199
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_200 200
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_201 201
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_202 202
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_203 203
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_204 204
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_205 205
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_206 206
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_207 207
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_208 208
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_209 209
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_210 210
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_211 211
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_212 212
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_213 213
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_214 214
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_215 215
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_216 216
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_217 217
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_218 218
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_219 219
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_220 220
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_221 221
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_222 222
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_223 223
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_224 224
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_225 225
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_226 226
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_227 227
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_228 228
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_229 229
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_230 230
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_231 231
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_232 232
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_233 233
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_234 234
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_235 235
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_236 236
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_237 237
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_238 238
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_239 239
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_240 240
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_241 241
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_242 242
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_243 243
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_244 244
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_245 245
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_246 246
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_247 247
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_248 248
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_249 249
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_250 250
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_251 251
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_252 252
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_253 253
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_254 254
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_255 255
# define YAS_PP_SEQ_SIZE_YAS_PP_SEQ_SIZE_256 256
#
# endif
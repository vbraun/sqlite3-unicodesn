//
//  stopwords_fr.h
//  LiteCore
//
//  Created by Jens Alfke on 11/7/17.
//  Copyright © 2017 Couchbase. All rights reserved.
//

// Adapted from https://github.com/blevesearch/bleve/blob/master/analysis/lang/fr/stop_words_fr.go
// by converting to a C string literal.
//   s/|/\/\//
//   s/^(\S+)/"$1 "/

static const char* kFrenchStopWords =
 // From svn.tartarus.org/snowball/trunk/website/algorithms/french/stop.txt
 // This file is distributed under the BSD License.
 // See http://snowball.tartarus.org/license.php
 // Also see http://www.opensource.org/licenses/bsd-license.html
 //  - Encoding was converted to UTF-8.
 //  - This notice was added.
 //
 // NOTE: To use this file with StopFilterFactory, you must specify format="snowball"

 // A French stop word list. Comments begin with vertical bar. Each stop
 // word is at the start of a line.

"au "             //  a + le
"aux "            //  a + les
"avec "           //  with
"ce "             //  this
"ces "            //  these
"dans "           //  with
"de "             //  of
"des "            //  de + les
"du "             //  de + le
"elle "           //  she
"en "             //  'of them' etc
"et "             //  and
"eux "            //  them
"il "             //  he
"je "             //  I
"la "             //  the
"le "             //  the
"leur "           //  their
"lui "            //  him
"ma "             //  my (fem)
"mais "           //  but
"me "             //  me
"même "           //  same; as in moi-même (myself) etc
"mes "            //  me (pl)
"moi "            //  me
"mon "            //  my (masc)
"ne "             //  not
"nos "            //  our (pl)
"notre "          //  our
"nous "           //  we
"on "             //  one
"ou "             //  where
"par "            //  by
"pas "            //  not
"pour "           //  for
"qu "             //  que before vowel
"que "            //  that
"qui "            //  who
"sa "             //  his, her (fem)
"se "             //  oneself
"ses "            //  his (pl)
"son "            //  his, her (masc)
"sur "            //  on
"ta "             //  thy (fem)
"te "             //  thee
"tes "            //  thy (pl)
"toi "            //  thee
"ton "            //  thy (masc)
"tu "             //  thou
"un "             //  a
"une "            //  a
"vos "            //  your (pl)
"votre "          //  your
"vous "           //  you

               //  single letter forms

"c "              //  c'
"d "              //  d'
"j "              //  j'
"l "              //  l'
"à "              //  to, at
"m "              //  m'
"n "              //  n'
"s "              //  s'
"t "              //  t'
"y "              //  there

               // forms of être (not including the infinitive):
"été "
"étée "
"étées "
"étés "
"étant "
"suis "
"es "
"est "
"sommes "
"êtes "
"sont "
"serai "
"seras "
"sera "
"serons "
"serez "
"seront "
"serais "
"serait "
"serions "
"seriez "
"seraient "
"étais "
"était "
"étions "
"étiez "
"étaient "
"fus "
"fut "
"fûmes "
"fûtes "
"furent "
"sois "
"soit "
"soyons "
"soyez "
"soient "
"fusse "
"fusses "
"fût "
"fussions "
"fussiez "
"fussent "

               // forms of avoir (not including the infinitive):
"ayant "
"eu "
"eue "
"eues "
"eus "
"ai "
"as "
"avons "
"avez "
"ont "
"aurai "
"auras "
"aura "
"aurons "
"aurez "
"auront "
"aurais "
"aurait "
"aurions "
"auriez "
"auraient "
"avais "
"avait "
"avions "
"aviez "
"avaient "
"eut "
"eûmes "
"eûtes "
"eurent "
"aie "
"aies "
"ait "
"ayons "
"ayez "
"aient "
"eusse "
"eusses "
"eût "
"eussions "
"eussiez "
"eussent "

               // Later additions (from Jean-Christophe Deschamps)
"ceci "           //  this
"cela "           //  that
"celà "           //  that
"cet "            //  this
"cette "          //  this
"ici "            //  here
"ils "            //  they
"les "            //  the (pl)
"leurs "          //  their (pl)
"quel "           //  which
"quels "          //  which
"quelle "         //  which
"quelles "        //  which
"sans "           //  without
"soi "            //  oneself
;

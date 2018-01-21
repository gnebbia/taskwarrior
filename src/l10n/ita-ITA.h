////////////////////////////////////////////////////////////////////////////////
//
// Copyright 2006 - 2018, Paul Beckingham, Federico Hernandez.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included
// in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
// OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
// THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
// http://www.opensource.org/licenses/mit-license.php
//
////////////////////////////////////////////////////////////////////////////////

#ifndef INCLUDED_STRINGS
#define INCLUDED_STRINGS

// columns/Col*
#define STRING_COLUMN_LABEL_DESC     "Descrizione"
#define STRING_COLUMN_LABEL_DUE      "Scadenza"
#define STRING_COLUMN_LABEL_END      "Fine"
#define STRING_COLUMN_LABEL_ENTERED  "Inserito"
#define STRING_COLUMN_LABEL_COUNT    "Conteggio"
#define STRING_COLUMN_LABEL_COMPLETE "Completato"
#define STRING_COLUMN_LABEL_MOD      "Modificato"
#define STRING_COLUMN_LABEL_ADDED    "Aggiunto"
#define STRING_COLUMN_LABEL_AGE      "Età"
#define STRING_COLUMN_LABEL_PROJECT  "Progetto"
#define STRING_COLUMN_LABEL_UNTIL    "Fino a"
#define STRING_COLUMN_LABEL_WAIT     "Attesa"
#define STRING_COLUMN_LABEL_WAITING  "Attesa fino"
#define STRING_COLUMN_LABEL_RECUR    "Period"
#define STRING_COLUMN_LABEL_RECUR_L  "Periodico"
#define STRING_COLUMN_LABEL_START    "Inizio"
#define STRING_COLUMN_LABEL_STARTED  "Iniziati"
#define STRING_COLUMN_LABEL_ACTIVE   "A"
#define STRING_COLUMN_LABEL_STATUS   "Stato"
#define STRING_COLUMN_LABEL_STAT     "St"
#define STRING_COLUMN_LABEL_STAT_PE  "Da fare"
#define STRING_COLUMN_LABEL_STAT_CO  "Completati"
#define STRING_COLUMN_LABEL_STAT_DE  "Cancellati"
#define STRING_COLUMN_LABEL_STAT_WA  "In attesa"
#define STRING_COLUMN_LABEL_STAT_RE  "Periodicamente"
#define STRING_COLUMN_LABEL_STAT_P   "P"
#define STRING_COLUMN_LABEL_STAT_C   "C"
#define STRING_COLUMN_LABEL_STAT_D   "D"
#define STRING_COLUMN_LABEL_STAT_W   "W"
#define STRING_COLUMN_LABEL_STAT_R   "R"
#define STRING_COLUMN_LABEL_TAGS     "Tags"
#define STRING_COLUMN_LABEL_TAG      "Tag"
#define STRING_COLUMN_LABEL_UUID     "UUID"
#define STRING_COLUMN_LABEL_URGENCY  "Urgenza"
#define STRING_COLUMN_LABEL_NAME     "Nome"
#define STRING_COLUMN_LABEL_VALUE    "Valore"
#define STRING_COLUMN_LABEL_DATE     "Data"
#define STRING_COLUMN_LABEL_COLUMN   "Colonna"
#define STRING_COLUMN_LABEL_STYLES   "Formati Supportati"
#define STRING_COLUMN_LABEL_EXAMPLES "Esempio"
#define STRING_COLUMN_LABEL_SCHED    "Fissato"
#define STRING_COLUMN_LABEL_UDA      "Nome"
#define STRING_COLUMN_LABEL_TYPE     "Tipo"
#define STRING_COLUMN_LABEL_MODIFY   "Modifiable"
#define STRING_COLUMN_LABEL_NOMODIFY "Read Only"
#define STRING_COLUMN_LABEL_LABEL    "Etichetta"
#define STRING_COLUMN_LABEL_DEFAULT  "Predefinito"
#define STRING_COLUMN_LABEL_VALUES   "Valori consentiti"
#define STRING_COLUMN_LABEL_UDACOUNT "Conteggio Uso"
#define STRING_COLUMN_LABEL_ORPHAN   "UDA Orfano"

#define STRING_COLUMN_LABEL_COMMAND  "Command"
#define STRING_COLUMN_LABEL_CATEGORY "Category"
#define STRING_COLUMN_LABEL_RO       "R/W"
#define STRING_COLUMN_LABEL_SHOWS_ID "ID"
#define STRING_COLUMN_LABEL_GC       "GC"
#define STRING_COLUMN_LABEL_CONTEXT  "Context"
#define STRING_COLUMN_LABEL_FILTER   "Filter"
#define STRING_COLUMN_LABEL_MODS     "Mods"
#define STRING_COLUMN_LABEL_MISC     "Misc"

// Column Examples
#define STRING_COLUMN_EXAMPLES_TAGS  "casa @faccende next"
#define STRING_COLUMN_EXAMPLES_PROJ  "casa.giardino"
#define STRING_COLUMN_EXAMPLES_PAR   "casa"
#define STRING_COLUMN_EXAMPLES_IND   "  casa.giardino"
#define STRING_COLUMN_EXAMPLES_DESC  "Spostare i vestiti sul gancio più basso"
#define STRING_COLUMN_EXAMPLES_ANNO1 "Immediatamente prima di pranzo"
#define STRING_COLUMN_EXAMPLES_ANNO2 "Se si sta giocando la partita questo pomeriggio"
#define STRING_COLUMN_EXAMPLES_ANNO3 "Prima di scrivere la lettera a casa"
#define STRING_COLUMN_EXAMPLES_ANNO4 "Se non si va a tagliare i capelli"

// commands/Cmd*
#define STRING_CMD_VERSION_USAGE     "Mostra il numero di versione di taskwarrior"
#define STRING_CMD_VERSION_USAGE2    "Mostra solo il numero di versione di taskwarrior"
#define STRING_CMD_VERSION_DOCS      "La documentazione di taskwarrior è consultabile con 'man task', 'man taskrc', 'man task-color', 'man task-sync' o presso http://taskwarrior.org"
#define STRING_CMD_VERSION_UNKNOWN   "sconosciuto"
#define STRING_CMD_EXEC_USAGE        "Esegue comandi e script esterni"
#define STRING_CMD_URGENCY_USAGE     "Mostra l'urgenza di un task"
#define STRING_CMD_URGENCY_RESULT    "task {1} urgenza {2}"
#define STRING_CMD_ADD_USAGE         "Aggiunge un nuovo task"
#define STRING_CMD_ADD_FEEDBACK      "Task {1} creato."
#define STRING_CMD_ADD_RECUR         "Created task {1} (recurrence template)."
#define STRING_CMD_LOG_USAGE         "Aggiunge un nuovo task già completato"
#define STRING_CMD_LOG_NO_RECUR      "Task periodici non possono essere registrati."
#define STRING_CMD_LOG_NO_WAITING    "Task in attesa non possono essere registrati."

//#define STRING_CMD_LOG_LOGGED        "Task registrato."
#define STRING_CMD_LOG_LOGGED        "Logged task {1}."

#define STRING_CMD_IDS_USAGE_RANGE   "Mostra gli ID dei task corrispondenti, come intervallo"
#define STRING_CMD_IDS_USAGE_LIST    "Mostra gli ID dei task corrispondenti, in forma di lista"
#define STRING_CMD_IDS_USAGE_ZSH     "Mostra gli ID e le descrizioni dei task corrispondenti"
#define STRING_CMD_UDAS_USAGE        "Mostra tutti i dettagli degli UDA definiti"
#define STRING_CMD_UDAS_COMPL_USAGE  "Mostra gli UDA definiti per il completamento"
#define STRING_CMD_UUIDS_USAGE_RANGE "Mostra gli UUID dei task corrispondenti, come lista separata da virgole"
#define STRING_CMD_UUIDS_USAGE_LIST  "Mostra gli UUID dei task corrispondenti, come lista"
#define STRING_CMD_UUIDS_USAGE_ZSH   "Mostra gli UUID e le descrizioni dei task corrispondenti"
#define STRING_CMD_INFO_USAGE        "Mostra tutti i dati e i metadati"
#define STRING_CMD_INFO_BLOCKED      "Questo task è bloccato da"
#define STRING_CMD_INFO_BLOCKING     "Questo task sta bloccando"
#define STRING_CMD_INFO_UNTIL        "Fino a"
#define STRING_CMD_INFO_MODIFICATION "Modifica"
#define STRING_CMD_INFO_MODIFIED     "Ultima modifica"
#define STRING_CMD_INFO_VIRTUAL_TAGS "Virtual tags"
#define STRING_CMD_UNDO_USAGE        "Ritorna alla più recente modifica di un task"
#define STRING_CMD_STATS_USAGE       "Mostra le statistiche sul task"
#define STRING_CMD_STATS_CATEGORY    "Categoria"
#define STRING_CMD_STATS_DATA        "Dati"
#define STRING_CMD_STATS_TOTAL       "Totale"
#define STRING_CMD_STATS_ANNOTATIONS "Annotazioni"
#define STRING_CMD_STATS_UNIQUE_TAGS "Tag univoci"
#define STRING_CMD_STATS_PROJECTS    "Progetti"
#define STRING_CMD_STATS_DATA_SIZE   "Dimensione dati"
#define STRING_CMD_STATS_UNDO_TXNS   "Transazioni di undo"
#define STRING_CMD_STATS_BACKLOG     "Sincronizza le transazioni di backlog"
#define STRING_CMD_STATS_TAGGED      "Task taggati"
#define STRING_CMD_STATS_OLDEST      "Task più vecchio"
#define STRING_CMD_STATS_NEWEST      "Task più recente"
#define STRING_CMD_STATS_USED_FOR    "Task usati per"
#define STRING_CMD_STATS_ADD_EVERY   "Task aggiunti ogni"
#define STRING_CMD_STATS_COMP_EVERY  "Task completati ogni"
#define STRING_CMD_STATS_DEL_EVERY   "Task cancellati ogni"
#define STRING_CMD_STATS_AVG_PEND    "Tempo medio di attesa"
#define STRING_CMD_STATS_DESC_LEN    "Lunghezza media delle descrizioni"
#define STRING_CMD_STATS_CHARS       "{1} caratteri"
#define STRING_CMD_STATS_BLOCKED     "Task bloccati"
#define STRING_CMD_STATS_BLOCKING    "Task bloccanti"
#define STRING_CMD_REPORTS_USAGE     "Lista dei report supportati"
#define STRING_CMD_REPORTS_REPORT    "Report"
#define STRING_CMD_REPORTS_DESC      "Descrizione"
#define STRING_CMD_REPORTS_SUMMARY   "{1} report"
#define STRING_CMD_TAGS_USAGE        "Mostra la lista di tutti i tag utilizzati"
#define STRING_CMD_COMTAGS_USAGE     "Mostra solo una lista dei tag utilizzati, per autocompletamento"
#define STRING_CMD_TAGS_SINGLE       "1 tag"
#define STRING_CMD_TAGS_PLURAL       "{1} tag"
#define STRING_CMD_TAGS_NO_TAGS      "Nessun tag."
#define STRING_CMD_HISTORY_USAGE_D   "Shows a report of task history, by day"
#define STRING_CMD_HISTORY_USAGE_W   "Shows a report of task history, by week"
#define STRING_CMD_HISTORY_DAY       "Day"
#define STRING_CMD_GHISTORY_USAGE_D  "Shows a graphical report of task history, by day"
#define STRING_CMD_GHISTORY_USAGE_W  "Shows a graphical report of task history, by week"
#define STRING_CMD_GHISTORY_USAGE_D  "Shows a graphical report of task history, by day"
#define STRING_CMD_GHISTORY_USAGE_W  "Shows a graphical report of task history, by week"
#define STRING_CMD_GHISTORY_DAY      "Day"
#define STRING_CMD_HISTORY_USAGE_M   "Mostra un report dello storico dei task, per mese"
#define STRING_CMD_HISTORY_YEAR      "Anno"
#define STRING_CMD_HISTORY_MONTH     "Mese"
#define STRING_CMD_HISTORY_ADDED     "Aggiunto"
#define STRING_CMD_HISTORY_COMP      "Completato"
#define STRING_CMD_HISTORY_DEL       "Cancellato"
#define STRING_CMD_HISTORY_NET       "Bilancio"
#define STRING_CMD_HISTORY_USAGE_A   "Mostra un report dello storico dei task, per anno"
#define STRING_CMD_HISTORY_AVERAGE   "Media"
#define STRING_CMD_HISTORY_LEGEND    "Legenda: {1}, {2}, {3}"
#define STRING_CMD_HISTORY_LEGEND_A  "Legenda: + aggiunto, X completato, - cancellato"
#define STRING_CMD_GHISTORY_USAGE_M  "Mostra un report grafico dello storico dei task, per mese"
#define STRING_CMD_GHISTORY_USAGE_A  "Mostra un report grafico dello storico dei task, per anno"
#define STRING_CMD_GHISTORY_YEAR     "Anno"
#define STRING_CMD_GHISTORY_MONTH    "Mese"
#define STRING_CMD_GHISTORY_NUMBER   "Aggiunti/Completati/Cancellati"
#define STRING_CMD_UNIQUE_USAGE      "Generates lists of unique attribute values"
#define STRING_CMD_UNIQUE_MISSING    "An attribute must be specified.  See 'task _columns'."
#define STRING_CMD_UNIQUE_VALID      "You must specify an attribute or UDA."

#define STRING_CMD_PROJECTS_USAGE    "Mostra tutti i nomi di progetto utilizzati"
#define STRING_CMD_PROJECTS_USAGE_2  "Mostra solo i nomi di progetto utilizzati"
#define STRING_CMD_PROJECTS_NO       "Nessun progetto."
#define STRING_CMD_PROJECTS_NONE     "(nessuno)"
#define STRING_CMD_PROJECTS_SUMMARY  "{1} progetto"
#define STRING_CMD_PROJECTS_SUMMARY2 "{1} progetti"
#define STRING_CMD_PROJECTS_TASK     "({1} task)"
#define STRING_CMD_PROJECTS_TASKS    "({1} task)"
#define STRING_CMD_SUMMARY_USAGE     "Mostra un report dello stato dei task per progetto"
#define STRING_CMD_SUMMARY_PROJECT   "Progetto"
#define STRING_CMD_SUMMARY_REMAINING "Rimanenti"
#define STRING_CMD_SUMMARY_AVG_AGE   "Età media"
#define STRING_CMD_SUMMARY_COMPLETE  "Completi"
#define STRING_CMD_SUMMARY_NONE      "(nessuno)"
#define STRING_CMD_COUNT_USAGE       "Conteggia task corrispondenti"

#define STRING_CMD_PURGE_USAGE       "Removes the specified tasks from the data files. Causes permanent loss of data."
#define STRING_CMD_PURGE_ABRT        "Purge operation aborted."
#define STRING_CMD_PURGE_1           "Purged {1} task."
#define STRING_CMD_PURGE_N           "Purged {1} tasks."
#define STRING_CMD_PURGE_CONFIRM     "Permanently remove task {1} '{2}'?"
#define STRING_CMD_PURGE_CONFIRM_R   "Task '{1}' is a recurrence template. All its {2} deleted children tasks will be purged as well. Continue?"
#define STRING_CMD_PURGE_NDEL_CHILD  "Task '{1}' is a recurrence template. Its child task {2} must be deleted before it can be purged."

#define STRING_CMD_APPEND_USAGE      "Aggiunge testo alla fine di una descrizione di un task esistente"
#define STRING_CMD_APPEND_1          "Aggiunta al task {1}."
#define STRING_CMD_APPEND_N          "Aggiunte ai task {1}."
#define STRING_CMD_APPEND_TASK       "Aggiunta al task {1} '{2}'."
#define STRING_CMD_APPEND_TASK_R     "Aggiunta al task periodico {1} '{2}'."
#define STRING_CMD_APPEND_CONFIRM_R  "Questo è un task periodico. Aggiungere il testo alla fine della descrizione di tutti i task associati?"
#define STRING_CMD_APPEND_CONFIRM    "Aggiungere alla fine della descrizione del task {1} '{2}'?"
#define STRING_CMD_APPEND_NO         "Aggiunta non effettuata."

#define STRING_CMD_PREPEND_USAGE     "Aggiunge testo all'inizio di una descrizione di un task esistente"
#define STRING_CMD_PREPEND_1         "Aggiunta al task {1}."
#define STRING_CMD_PREPEND_N         "Aggiunte ai task {1}."
#define STRING_CMD_PREPEND_TASK      "Aggiunta al task {1} '{2}'."
#define STRING_CMD_PREPEND_TASK_R    "Aggiunta al task periodico {1} '{2}'."
#define STRING_CMD_PREPEND_CONFIRM_R "Questo è un task periodico. Aggiungere il testo all'inizio della descrizione di tutti i task associati?"
#define STRING_CMD_PREPEND_CONFIRM   "Aggiungere all'inizio della descrizione del task {1} '{2}'?"
#define STRING_CMD_PREPEND_NO        "Aggiunta non effettuata."

#define STRING_CMD_ANNO_USAGE        "Aggiunge una annotazione a un task esistente"
#define STRING_CMD_ANNO_CONFIRM      "Aggiungere una annotazione al task {1} '{2}'?"
#define STRING_CMD_ANNO_TASK         "Aggiunta al task {1} '{2}'."
#define STRING_CMD_ANNO_TASK_R       "Aggiunta al task periodico {1} '{2}'."
#define STRING_CMD_ANNO_CONFIRM_R    "Questo è un task periodico. Aggiungere una annotazione a tutti i task associati?"
#define STRING_CMD_ANNO_NO           "Aggiunta non effettuata."
#define STRING_CMD_ANNO_1            "Aggiunta al task {1}."
#define STRING_CMD_ANNO_N            "Aggiunte ai task {1}."

#define STRING_CMD_DENO_USAGE        "Cancella una annotazione"
#define STRING_CMD_DENO_NONE         "Il task specificato non ha annotazioni che possano essere cancellate."
#define STRING_CMD_DENO_CONFIRM      "Denotare il task {1} '{2}'?"
#define STRING_CMD_DENO_FOUND        "Annotazione '{1}' trovata e cancellata."
#define STRING_CMD_DENO_NOMATCH      "Nessuna annotazione da cancellare trovata per '{1}'."
#define STRING_CMD_DENO_NO           "Annotazione non rimossa."
#define STRING_CMD_DENO_1            "Annotazione rimossa da task {1}."
#define STRING_CMD_DENO_N            "Annotazioni rimosse da task {1}."

#define STRING_CMD_IMPORT_USAGE      "Importa file JSON"
#define STRING_CMD_IMPORT_SUMMARY    "Importati {1} task."
#define STRING_CMD_IMPORT_FILE       "Importazione di '{1}'"
#define STRING_CMD_IMPORT_MISSING    "File '{1}' not found."
#define STRING_CMD_IMPORT_UUID_BAD   "Not a valid UUID '{1}'."
#define STRING_TASK_NO_DESC          "Annotazione senza descrizione: {1}"
#define STRING_TASK_NO_ENTRY         "Annotazione senza data di immissione: {1}"

#define STRING_CMD_COMMANDS_USAGE    "Generates a list of all commands, with behavior details"
#define STRING_CMD_HCOMMANDS_USAGE   "Genera la lista di tutti i comandi, per autocompletamento"
#define STRING_CMD_ZSHCOMMANDS_USAGE "Genera la lista di tutti i comandi, per autocompletamento in zsh"
#define STRING_CMD_ZSHATTS_USAGE     "Generates a list of all attributes, for zsh autocompletion purposes"
#define STRING_CMD_ALIASES_USAGE     "Genera la lista di tutti gli alias, per autocompletamento"

#define STRING_CMD_COLOR_USAGE       "Tutti i colori, un esempio, o una legenda"
#define STRING_CMD_COLOR_HERE        "Coloti in uso:"
#define STRING_CMD_COLOR_COLOR       "Colore"
#define STRING_CMD_COLOR_DEFINITION  "Definizione"
#define STRING_CMD_COLOR_EXPLANATION "Usare questo comando per vedere come i colori sono visualizzati sul terminale in uso."
#define STRING_CMD_COLOR_16          "16-colori in uso (supporto per sottolineatura, grassetto, e sfondo):"
#define STRING_CMD_COLOR_256         "256-colori in uso (supporto per sottolineatura):"
#define STRING_CMD_COLOR_YOURS       "Esempio:"
#define STRING_CMD_COLOR_BASIC       "Colori base"
#define STRING_CMD_COLOR_EFFECTS     "Effetti"
#define STRING_CMD_COLOR_CUBE        "Cubo dei colori RGB"
#define STRING_CMD_COLOR_RAMP        "Rampa dei grigi"
#define STRING_CMD_COLOR_TRY         "Provare eseguendo '{1}'."
#define STRING_CMD_COLOR_OFF         "Il colore è attualmente disabilitato nel file .taskrc. Per abilitarlo, rimuovi la linea 'color=off', o cambia 'off' in 'on'."
#define STRING_CMD_CONFIG_USAGE      "Modifica le impostazioni nella configurazione dei task"
#define STRING_CMD_CONFIG_CONFIRM    "Sei sicuro di voler cambiare il valore di '{1}' da '{2}' a '{3}'?"
#define STRING_CMD_CONFIG_CONFIRM2   "Sei sicuro di voler aggiungere '{1}' con valore '{2}'?"
#define STRING_CMD_CONFIG_CONFIRM3   "Sei sicuro di voler rimuovere '{1}'?"
#define STRING_CMD_CONFIG_NO_ENTRY   "Nessuna voce '{1}' trovata."
#define STRING_CMD_CONFIG_FILE_MOD   "File di configurazione {1} modificato."
#define STRING_CMD_CONFIG_NO_NAME    "Specificare il nome di una variabile di configurazione da modificare."
#define STRING_CMD_HCONFIG_USAGE     "Elenca le variabili di configurazione supportate, per autocompletamento"
#define STRING_CMD_CONTEXT_USAGE     "Set and define contexts (default filters)"
#define STRING_CMD_CONTEXT_DEF_SUCC  "Context '{1}' defined. Use 'task context {1}' to activate."
#define STRING_CMD_CONTEXT_DEF_FAIL  "Context '{1}' not defined."
#define STRING_CMD_CONTEXT_DEF_USAG  "Both context name and its definition must be provided."
#define STRING_CMD_CONTEXT_DEF_ABRT  "Context definiton aborted."
#define STRING_CMD_CONTEXT_DEF_ABRT2 "Filter validation failed: {1}"
#define STRING_CMD_CONTEXT_DEF_CONF  "The filter '{1}' matches 0 pending tasks. Do you wish to continue?"
#define STRING_CMD_CONTEXT_DEF_INVLD "The name '{1}' is reserved and not allowed to use as a context name."
#define STRING_CMD_CONTEXT_DEL_SUCC  "Context '{1}' deleted."
#define STRING_CMD_CONTEXT_DEL_FAIL  "Context '{1}' not deleted."
#define STRING_CMD_CONTEXT_DEL_USAG  "Context name needs to be specified."
#define STRING_CMD_CONTEXT_LIST_EMPT "No contexts defined."
#define STRING_CMD_CONTEXT_SET_NFOU  "Context '{1}' not found."
#define STRING_CMD_CONTEXT_SET_SUCC  "Context '{1}' set. Use 'task context none' to remove."
#define STRING_CMD_CONTEXT_SET_FAIL  "Context '{1}' not applied."
#define STRING_CMD_CONTEXT_SHOW_EMPT "No context is currently applied."
#define STRING_CMD_CONTEXT_SHOW      "Context '{1}' with filter '{2}' is currently applied."
#define STRING_CMD_CONTEXT_NON_SUCC  "Context unset."
#define STRING_CMD_CONTEXT_NON_FAIL  "Context not unset."
#define STRING_CMD_HCONTEXT_USAGE    "Lists all supported contexts, for completion purposes"
#define STRING_CMD_CUSTOM_MISMATCH   "Differente numero di colonne ed etichette per il report '{1}'."
#define STRING_CMD_CUSTOM_SHOWN      "{1} mostrato"
#define STRING_CMD_CUSTOM_COUNT      "1 task"
#define STRING_CMD_CUSTOM_COUNTN     "{1} task"
#define STRING_CMD_CUSTOM_TRUNCATED  "troncato alla linea {1}"
#define STRING_CMD_TIMESHEET_USAGE   "Sommario settimanale dei task completati e avviati"
#define STRING_CMD_TIMESHEET_STARTED "Avviati ({1} task)"
#define STRING_CMD_TIMESHEET_DONE    "Completati ({1} task)"
#define STRING_CMD_BURN_USAGE_M      "Mostra un grafico del lavoro da svolgere, per mese"
#define STRING_CMD_BURN_USAGE_W      "Mostra un grafico del lavoro da svolgere, per settimana"
#define STRING_CMD_BURN_USAGE_D      "Mostra un grafico del lavoro da svolgere, per giorno"
#define STRING_CMD_BURN_TITLE        "Lavoro da svolgere"
#define STRING_CMD_BURN_TOO_SMALL    "Finestra troppo piccola per mostrare il grafico."
#define STRING_CMD_BURN_TOO_LARGE    "Terminal window too large to draw a graph."
#define STRING_CMD_BURN_DAILY        "Giornaliero"
#define STRING_CMD_BURN_WEEKLY       "Settimanale"
#define STRING_CMD_BURN_MONTHLY      "Mensile"
#define STRING_CMD_BURN_STARTED      "Avviato"          // Must be 7 or fewer characters
#define STRING_CMD_BURN_DONE         "Chiuso"             // Must be 7 or fewer characters
#define STRING_CMD_BURN_PENDING      "Da fare"          // Must be 7 or fewer characters
#define STRING_CMD_BURN_NO_CONVERGE  "No convergenza"
#define STRING_CMD_CAL_USAGE         "Mostra un calendario, con i task da svolgere marcati"
#define STRING_CMD_CAL_BAD_MONTH     "L'argomento '{1}' non è un mese valido."
#define STRING_CMD_CAL_BAD_ARG       "Impossibile riconosce l'argomento '{1}'."
#define STRING_CMD_CAL_LABEL_DATE    "Data"
#define STRING_CMD_CAL_LABEL_HOL     "Festività"
#define STRING_CMD_CAL_SUN_MON       "La variabile di configurazione 'weekstart' può solo contenere i valori 'Domenica' or 'Lunedì'."
#define STRING_CMD_CALC_USAGE        "Calculator"

// Feedback
#define STRING_FEEDBACK_NO_TASKS     "Nessun task."
#define STRING_FEEDBACK_NO_TASKS_SP  "Nessun task specificat."
#define STRING_FEEDBACK_NO_MATCH     "Nessuna corrispondenza."
#define STRING_FEEDBACK_TASKS_SINGLE "(1 task)"
#define STRING_FEEDBACK_TASKS_PLURAL "({1} task)"
#define STRING_FEEDBACK_DELETED      "{1} sarà cancellato."
#define STRING_FEEDBACK_DEP_SET      "Le dipendenze saranno impostate a '{1}'."
#define STRING_FEEDBACK_DEP_MOD      "Le dipendenze saranno modificate da '{1}' in '{2}'."
#define STRING_FEEDBACK_DEP_DEL      "Dipendenze '{1}' cancellate."
#define STRING_FEEDBACK_DEP_WAS_SET  "Dipendenze impostate a '{1}'."
#define STRING_FEEDBACK_DEP_WAS_MOD  "Dipendenze cambiate da '{1}' a '{2}'."
#define STRING_FEEDBACK_ATT_SET      "{1} sarà impostata a '{2}'."
#define STRING_FEEDBACK_ATT_MOD      "{1} sarà modificata da '{2}' a '{3}'."
#define STRING_FEEDBACK_ATT_DEL      "{1} cancellato."
#define STRING_FEEDBACK_ATT_DEL_DUR  "{1} cancellato (durata: {2})."
#define STRING_FEEDBACK_ATT_WAS_SET  "{1} impostata a '{2}'."
#define STRING_FEEDBACK_ATT_WAS_MOD  "{1} modificata da '{2}' a '{3}'."
#define STRING_FEEDBACK_ANN_ADD      "Annotazione di '{1}' aggiunta."
#define STRING_FEEDBACK_ANN_DEL      "Annotazione '{1}' cancellata."
#define STRING_FEEDBACK_ANN_WAS_MOD  "Annotazione modificata in '{1}'."
#define STRING_FEEDBACK_NOP          "Nessuna modifica sarà apportata."
#define STRING_FEEDBACK_WAS_NOP      "Nessuna modifica apportata."
#define STRING_FEEDBACK_TAG_NOCOLOR  "Il tag speciale 'nocolor' disabilita le regole dei colori per questo task."
#define STRING_FEEDBACK_TAG_NONAG    "Il tag speciale 'nonag' eviterà problemi quando il task è modificato."
#define STRING_FEEDBACK_TAG_NOCAL    "Il tag speciale 'nocal' manterrà il task fuori dal report 'calendar'."
#define STRING_FEEDBACK_TAG_NEXT     "Il tag speciale 'next' aumenterà l'urgenza di questo task in modo che appaia nel report 'next'."
#define STRING_FEEDBACK_TAG_VIRTUAL  "Virtual tags (including '{1}') are reserved and may not be added or removed."
#define STRING_FEEDBACK_UNBLOCKED    "Sbloccato {1} '{2}'."
#define STRING_FEEDBACK_EXPIRED      "Il task {1} '{2}' è scaduto ed è stato eliminato"
#define STRING_FEEDBACK_BACKLOG_N    "There are {1} local changes.  Sync required."
#define STRING_FEEDBACK_BACKLOG      "There is {1} local change.  Sync required."

// Task
#define STRING_TASK_NO_FF1           "Taskwarrior non supporta più il formato di file 1, usato tra il 27 Novembre 2006 e il 31 Dicembre 2007."
#define STRING_TASK_NO_FF2           "Taskwarrior no longer supports file format 2, originally used between 1 January 2008 and 12 April 2009."
#define STRING_TASK_NO_FF3           "Taskwarrior no longer supports file format 3, originally used between 23 March 2009 and 16 May 2009."
#define STRING_TASK_PARSE_UNREC_FF   "Formato di file non riconosciuto."
#define STRING_TASK_DEPEND_ITSELF    "Un task non può dipendere da sè stesso."
#define STRING_TASK_DEPEND_MISS_CREA "Impossibile creare la dipendenza dal task {1} - non trovato."
#define STRING_TASK_DEPEND_MISS_DEL  "Impossibile cancellare la dipendenza dal task {1} - non trovato."
#define STRING_TASK_DEPEND_DUP       "Task {1} già dipende da {2}."
#define STRING_TASK_DEPEND_CIRCULAR  "Dipendenza circolare riscontrata ed evitata."
#define STRING_TASK_VALID_BLANK      "Impossibile aggiungere un task vuoto."
#define STRING_TASK_VALID_BEFORE     "Warning: data '{1}' con valore successivo alla data '{2}'."
#define STRING_TASK_VALID_REC_DUE    "Un task periodico deve avere una data di scadenza."
#define STRING_TASK_SAFETY_VALVE     "This command has no filter, and will modify all (including completed and deleted) tasks.  Are you sure?"
#define STRING_TASK_SAFETY_FAIL      "Prevenuta l'esecuzione del comando."
#define STRING_TASK_SAFETY_ALLOW     "You did not specify a filter, and with the 'allow.empty.filter' value, no action is taken."
#define STRING_TASK_INVALID_COL_TYPE "Unrecognized column type '{1}' for column '{2}'"

#endif

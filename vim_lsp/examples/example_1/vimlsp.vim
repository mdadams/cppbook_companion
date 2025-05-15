" Example Vim LSP user setup file .vimrc-vimlsp

let g:lsp_diagnostics_signs_enabled = 1
let g:lsp_diagnostics_signs_error = {'text': '🗙'}
let g:lsp_diagnostics_signs_warning = {'text': '⚠️'}
let g:lsp_diagnostics_signs_hint = {'text': '💡'}
let g:lsp_diagnostics_signs_information = {'text': '🛈'}

let g:lsp_diagnostics_enabled = 1
let g:lsp_diagnostics_echo_cursor = 0
let g:lsp_diagnostics_float_cursor = 1

let g:lsp_document_code_action_signs_enabled = 1
let g:lsp_document_code_action_signs_hint = {'text': 'Ⓐ'}

" invoke sde_lsp_cpp_setup for C and C++ source files
autocmd FileType c,cpp call s:sde_lsp_cpp_setup()

function s:sde_lsp_cpp_setup()

	nmap <buffer> gd :below LspDefinition<cr>
	nmap <buffer> gs :LspDocumentSymbolSearch<cr>
	nmap <buffer> gS :LspWorkspaceSymbolSearch<cr>
	nmap <buffer> gr :LspReferences<cr>
	nmap <buffer> gi :below LspImplementation<cr>
	nmap <buffer> gt :below LspTypeDefinition<cr>
	nmap <buffer> <leader>rn :LspRename<cr>
	nmap <buffer> [g :LspPreviousDiagnostic<cr>
	nmap <buffer> ]g :LspNextDiagnostic<cr>
	nmap <buffer> K :LspHover<cr>
	nnoremap <buffer> <expr><c-f> lsp#scroll(+4)
	nnoremap <buffer> <expr><c-b> lsp#scroll(-4)

	"inoremap <expr> <Tab> pumvisible() ? "\<C-n>" : "\<Tab>"
	"inoremap <expr> <S-Tab> pumvisible() ? "\<C-p>" : "\<S-Tab>"
	"inoremap <expr> <cr>    pumvisible() ? "\<C-y>" : "\<cr>"
	"imap <c-space> <Plug>(asyncomplete_force_refresh)

endfunction

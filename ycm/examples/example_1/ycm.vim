" Example of user YCM setup .vimrc-ycm

nnoremap <F5> :YcmForceCompileAndDiagnostics<CR>

" Uncomment the following if the leader key is not set.
" let mapleader=","

" nnoremap <leader>d :YcmDiags GoTo<CR>
nnoremap <leader>yt :YcmCompleter GetType<CR>
nnoremap <leader>yg :YcmCompleter GoTo<CR>
nnoremap <leader>yd :YcmCompleter GoToDeclaration<CR>
nnoremap <leader>yD :YcmCompleter GoToDefinition<CR>
nnoremap <leader>yi :YcmCompleter GoToInclude<CR>
nnoremap <leader>yf :YcmCompleter FixIt<CR>

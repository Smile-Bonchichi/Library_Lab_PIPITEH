<?php

namespace App\Mail;

use Illuminate\Bus\Queueable;
use Illuminate\Mail\Mailable;
use Illuminate\Queue\SerializesModels;
use Illuminate\Contracts\Queue\ShouldQueue;

class MailClass extends Mailable
{
    use Queueable, SerializesModels;

    protected $username;
    protected $text;

    /**
     * Create a new message instance.
     *
     * @return void
     */
    public function __construct($username, $text)
    {
        //
        $this->username = $username;
        $this->text= $text;
    }

    /**
     * Build the message.
     *
     * @return $this
     */
    public function build()
    {
        $username1 = $this->username;
        $text = $this->text;
        return $this->view('mail', ['username' => $username1, 'text' => $text]);
    }
}

// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exchangecodefortokenrequest.h"
#include "exchangecodefortokenrequest_p.h"
#include "exchangecodefortokenresponse.h"
#include "amplifyuibuilderrequest_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::ExchangeCodeForTokenRequest
 * \brief The ExchangeCodeForTokenRequest class provides an interface for AmplifyUIBuilder ExchangeCodeForToken requests.
 *
 * \inmodule QtAwsAmplifyUIBuilder
 *
 *  The Amplify UI Builder API provides a programmatic interface for creating and configuring user interface (UI) component
 *  libraries and themes for use in your Amplify applications. You can then connect these UI components to an application's
 *  backend Amazon Web Services
 * 
 *  resources>
 * 
 *  You can also use the Amplify Studio visual designer to create UI components and model data for an app. For more
 *  information, see <a href="https://docs.amplify.aws/console/adminui/intro">Introduction</a> in the <i>Amplify
 * 
 *  Docs</i>>
 * 
 *  The Amplify Framework is a comprehensive set of SDKs, libraries, tools, and documentation for client app development.
 *  For more information, see the <a href="https://docs.amplify.aws/">Amplify Framework</a>. For more information about
 *  deploying an Amplify application to Amazon Web Services, see the <a
 *  href="https://docs.aws.amazon.com/amplify/latest/userguide/welcome.html">Amplify User
 *
 * \sa AmplifyUIBuilderClient::exchangeCodeForToken
 */

/*!
 * Constructs a copy of \a other.
 */
ExchangeCodeForTokenRequest::ExchangeCodeForTokenRequest(const ExchangeCodeForTokenRequest &other)
    : AmplifyUIBuilderRequest(new ExchangeCodeForTokenRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExchangeCodeForTokenRequest object.
 */
ExchangeCodeForTokenRequest::ExchangeCodeForTokenRequest()
    : AmplifyUIBuilderRequest(new ExchangeCodeForTokenRequestPrivate(AmplifyUIBuilderRequest::ExchangeCodeForTokenAction, this))
{

}

/*!
 * \reimp
 */
bool ExchangeCodeForTokenRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExchangeCodeForTokenResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExchangeCodeForTokenRequest::response(QNetworkReply * const reply) const
{
    return new ExchangeCodeForTokenResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyUIBuilder::ExchangeCodeForTokenRequestPrivate
 * \brief The ExchangeCodeForTokenRequestPrivate class provides private implementation for ExchangeCodeForTokenRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a ExchangeCodeForTokenRequestPrivate object for AmplifyUIBuilder \a action,
 * with public implementation \a q.
 */
ExchangeCodeForTokenRequestPrivate::ExchangeCodeForTokenRequestPrivate(
    const AmplifyUIBuilderRequest::Action action, ExchangeCodeForTokenRequest * const q)
    : AmplifyUIBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExchangeCodeForTokenRequest
 * class' copy constructor.
 */
ExchangeCodeForTokenRequestPrivate::ExchangeCodeForTokenRequestPrivate(
    const ExchangeCodeForTokenRequestPrivate &other, ExchangeCodeForTokenRequest * const q)
    : AmplifyUIBuilderRequestPrivate(other, q)
{

}

} // namespace AmplifyUIBuilder
} // namespace QtAws

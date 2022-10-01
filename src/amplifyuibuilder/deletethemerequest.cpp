// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletethemerequest.h"
#include "deletethemerequest_p.h"
#include "deletethemeresponse.h"
#include "amplifyuibuilderrequest_p.h"

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::DeleteThemeRequest
 * \brief The DeleteThemeRequest class provides an interface for AmplifyUIBuilder DeleteTheme requests.
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
 * \sa AmplifyUIBuilderClient::deleteTheme
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteThemeRequest::DeleteThemeRequest(const DeleteThemeRequest &other)
    : AmplifyUIBuilderRequest(new DeleteThemeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteThemeRequest object.
 */
DeleteThemeRequest::DeleteThemeRequest()
    : AmplifyUIBuilderRequest(new DeleteThemeRequestPrivate(AmplifyUIBuilderRequest::DeleteThemeAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteThemeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteThemeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteThemeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteThemeResponse(*this, reply);
}

/*!
 * \class QtAws::AmplifyUIBuilder::DeleteThemeRequestPrivate
 * \brief The DeleteThemeRequestPrivate class provides private implementation for DeleteThemeRequest.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a DeleteThemeRequestPrivate object for AmplifyUIBuilder \a action,
 * with public implementation \a q.
 */
DeleteThemeRequestPrivate::DeleteThemeRequestPrivate(
    const AmplifyUIBuilderRequest::Action action, DeleteThemeRequest * const q)
    : AmplifyUIBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteThemeRequest
 * class' copy constructor.
 */
DeleteThemeRequestPrivate::DeleteThemeRequestPrivate(
    const DeleteThemeRequestPrivate &other, DeleteThemeRequest * const q)
    : AmplifyUIBuilderRequestPrivate(other, q)
{

}

} // namespace AmplifyUIBuilder
} // namespace QtAws

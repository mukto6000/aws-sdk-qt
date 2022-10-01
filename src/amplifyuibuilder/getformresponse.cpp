// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getformresponse.h"
#include "getformresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AmplifyUIBuilder {

/*!
 * \class QtAws::AmplifyUIBuilder::GetFormResponse
 * \brief The GetFormResponse class provides an interace for AmplifyUIBuilder GetForm responses.
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
 * \sa AmplifyUIBuilderClient::getForm
 */

/*!
 * Constructs a GetFormResponse object for \a reply to \a request, with parent \a parent.
 */
GetFormResponse::GetFormResponse(
        const GetFormRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AmplifyUIBuilderResponse(new GetFormResponsePrivate(this), parent)
{
    setRequest(new GetFormRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetFormRequest * GetFormResponse::request() const
{
    Q_D(const GetFormResponse);
    return static_cast<const GetFormRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AmplifyUIBuilder GetForm \a response.
 */
void GetFormResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetFormResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AmplifyUIBuilder::GetFormResponsePrivate
 * \brief The GetFormResponsePrivate class provides private implementation for GetFormResponse.
 * \internal
 *
 * \inmodule QtAwsAmplifyUIBuilder
 */

/*!
 * Constructs a GetFormResponsePrivate object with public implementation \a q.
 */
GetFormResponsePrivate::GetFormResponsePrivate(
    GetFormResponse * const q) : AmplifyUIBuilderResponsePrivate(q)
{

}

/*!
 * Parses a AmplifyUIBuilder GetForm response element from \a xml.
 */
void GetFormResponsePrivate::parseGetFormResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFormResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AmplifyUIBuilder
} // namespace QtAws

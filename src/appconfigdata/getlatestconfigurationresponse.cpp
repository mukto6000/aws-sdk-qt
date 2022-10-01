// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlatestconfigurationresponse.h"
#include "getlatestconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppConfigData {

/*!
 * \class QtAws::AppConfigData::GetLatestConfigurationResponse
 * \brief The GetLatestConfigurationResponse class provides an interace for AppConfigData GetLatestConfiguration responses.
 *
 * \inmodule QtAwsAppConfigData
 *
 *  AppConfig Data provides the data plane APIs your application uses to retrieve configuration data. Here's how it
 * 
 *  works>
 * 
 *  Your application retrieves configuration data by first establishing a configuration session using the AppConfig Data
 *  <a>StartConfigurationSession</a> API action. Your session's client then makes periodic calls to
 *  <a>GetLatestConfiguration</a> to check for and retrieve the latest data
 * 
 *  available>
 * 
 *  When calling <code>StartConfigurationSession</code>, your code sends the following
 * 
 *  information> <ul> <li>
 * 
 *  Identifiers (ID or name) of an AppConfig application, environment, and configuration profile that the session
 * 
 *  tracks> </li> <li>
 * 
 *  (Optional) The minimum amount of time the session's client must wait between calls to
 * 
 *  <code>GetLatestConfiguration</code>> </li> </ul>
 * 
 *  In response, AppConfig provides an <code>InitialConfigurationToken</code> to be given to the session's client and used
 *  the first time it calls <code>GetLatestConfiguration</code> for that
 * 
 *  session>
 * 
 *  When calling <code>GetLatestConfiguration</code>, your client code sends the most recent <code>ConfigurationToken</code>
 *  value it has and receives in
 * 
 *  response> <ul> <li>
 * 
 *  <code>NextPollConfigurationToken</code>: the <code>ConfigurationToken</code> value to use on the next call to
 * 
 *  <code>GetLatestConfiguration</code>> </li> <li>
 * 
 *  <code>NextPollIntervalInSeconds</code>: the duration the client should wait before making its next call to
 *  <code>GetLatestConfiguration</code>. This duration may vary over the course of the session, so it should be used instead
 *  of the value sent on the <code>StartConfigurationSession</code>
 * 
 *  call> </li> <li>
 * 
 *  The configuration: the latest data intended for the session. This may be empty if the client already has the latest
 *  version of the
 * 
 *  configuration> </li> </ul>
 * 
 *  For more information and to view example CLI commands that show how to retrieve a configuration using the AppConfig Data
 *  <code>StartConfigurationSession</code> and <code>GetLatestConfiguration</code> API actions, see <a
 *  href="http://docs.aws.amazon.com/appconfig/latest/userguide/appconfig-retrieving-the-configuration">Receiving the
 *  configuration</a> in the <i>AppConfig User
 *
 * \sa AppConfigDataClient::getLatestConfiguration
 */

/*!
 * Constructs a GetLatestConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
GetLatestConfigurationResponse::GetLatestConfigurationResponse(
        const GetLatestConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppConfigDataResponse(new GetLatestConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetLatestConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetLatestConfigurationRequest * GetLatestConfigurationResponse::request() const
{
    Q_D(const GetLatestConfigurationResponse);
    return static_cast<const GetLatestConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppConfigData GetLatestConfiguration \a response.
 */
void GetLatestConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetLatestConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppConfigData::GetLatestConfigurationResponsePrivate
 * \brief The GetLatestConfigurationResponsePrivate class provides private implementation for GetLatestConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsAppConfigData
 */

/*!
 * Constructs a GetLatestConfigurationResponsePrivate object with public implementation \a q.
 */
GetLatestConfigurationResponsePrivate::GetLatestConfigurationResponsePrivate(
    GetLatestConfigurationResponse * const q) : AppConfigDataResponsePrivate(q)
{

}

/*!
 * Parses a AppConfigData GetLatestConfiguration response element from \a xml.
 */
void GetLatestConfigurationResponsePrivate::parseGetLatestConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLatestConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppConfigData
} // namespace QtAws

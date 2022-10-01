// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getconfigurationseteventdestinationsresponse.h"
#include "getconfigurationseteventdestinationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetConfigurationSetEventDestinationsResponse
 * \brief The GetConfigurationSetEventDestinationsResponse class provides an interace for SESv2 GetConfigurationSetEventDestinations responses.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::getConfigurationSetEventDestinations
 */

/*!
 * Constructs a GetConfigurationSetEventDestinationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetConfigurationSetEventDestinationsResponse::GetConfigurationSetEventDestinationsResponse(
        const GetConfigurationSetEventDestinationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new GetConfigurationSetEventDestinationsResponsePrivate(this), parent)
{
    setRequest(new GetConfigurationSetEventDestinationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetConfigurationSetEventDestinationsRequest * GetConfigurationSetEventDestinationsResponse::request() const
{
    Q_D(const GetConfigurationSetEventDestinationsResponse);
    return static_cast<const GetConfigurationSetEventDestinationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 GetConfigurationSetEventDestinations \a response.
 */
void GetConfigurationSetEventDestinationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetConfigurationSetEventDestinationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::GetConfigurationSetEventDestinationsResponsePrivate
 * \brief The GetConfigurationSetEventDestinationsResponsePrivate class provides private implementation for GetConfigurationSetEventDestinationsResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetConfigurationSetEventDestinationsResponsePrivate object with public implementation \a q.
 */
GetConfigurationSetEventDestinationsResponsePrivate::GetConfigurationSetEventDestinationsResponsePrivate(
    GetConfigurationSetEventDestinationsResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 GetConfigurationSetEventDestinations response element from \a xml.
 */
void GetConfigurationSetEventDestinationsResponsePrivate::parseGetConfigurationSetEventDestinationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConfigurationSetEventDestinationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws

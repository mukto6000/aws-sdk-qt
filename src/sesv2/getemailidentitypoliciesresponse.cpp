// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getemailidentitypoliciesresponse.h"
#include "getemailidentitypoliciesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::GetEmailIdentityPoliciesResponse
 * \brief The GetEmailIdentityPoliciesResponse class provides an interace for SESv2 GetEmailIdentityPolicies responses.
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
 * \sa SESv2Client::getEmailIdentityPolicies
 */

/*!
 * Constructs a GetEmailIdentityPoliciesResponse object for \a reply to \a request, with parent \a parent.
 */
GetEmailIdentityPoliciesResponse::GetEmailIdentityPoliciesResponse(
        const GetEmailIdentityPoliciesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESv2Response(new GetEmailIdentityPoliciesResponsePrivate(this), parent)
{
    setRequest(new GetEmailIdentityPoliciesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetEmailIdentityPoliciesRequest * GetEmailIdentityPoliciesResponse::request() const
{
    Q_D(const GetEmailIdentityPoliciesResponse);
    return static_cast<const GetEmailIdentityPoliciesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SESv2 GetEmailIdentityPolicies \a response.
 */
void GetEmailIdentityPoliciesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetEmailIdentityPoliciesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SESv2::GetEmailIdentityPoliciesResponsePrivate
 * \brief The GetEmailIdentityPoliciesResponsePrivate class provides private implementation for GetEmailIdentityPoliciesResponse.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a GetEmailIdentityPoliciesResponsePrivate object with public implementation \a q.
 */
GetEmailIdentityPoliciesResponsePrivate::GetEmailIdentityPoliciesResponsePrivate(
    GetEmailIdentityPoliciesResponse * const q) : SESv2ResponsePrivate(q)
{

}

/*!
 * Parses a SESv2 GetEmailIdentityPolicies response element from \a xml.
 */
void GetEmailIdentityPoliciesResponsePrivate::parseGetEmailIdentityPoliciesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetEmailIdentityPoliciesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SESv2
} // namespace QtAws

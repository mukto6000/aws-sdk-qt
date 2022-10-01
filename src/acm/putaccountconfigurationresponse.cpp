// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putaccountconfigurationresponse.h"
#include "putaccountconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Acm {

/*!
 * \class QtAws::Acm::PutAccountConfigurationResponse
 * \brief The PutAccountConfigurationResponse class provides an interace for Acm PutAccountConfiguration responses.
 *
 * \inmodule QtAwsAcm
 *
 *  <fullname>Amazon Web Services Certificate Manager</fullname>
 * 
 *  You can use Amazon Web Services Certificate Manager (ACM) to manage SSL/TLS certificates for your Amazon Web
 *  Services-based websites and applications. For more information about using ACM, see the <a
 *  href="https://docs.aws.amazon.com/acm/latest/userguide/">Amazon Web Services Certificate Manager User
 *
 * \sa AcmClient::putAccountConfiguration
 */

/*!
 * Constructs a PutAccountConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
PutAccountConfigurationResponse::PutAccountConfigurationResponse(
        const PutAccountConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AcmResponse(new PutAccountConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutAccountConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutAccountConfigurationRequest * PutAccountConfigurationResponse::request() const
{
    Q_D(const PutAccountConfigurationResponse);
    return static_cast<const PutAccountConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Acm PutAccountConfiguration \a response.
 */
void PutAccountConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutAccountConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Acm::PutAccountConfigurationResponsePrivate
 * \brief The PutAccountConfigurationResponsePrivate class provides private implementation for PutAccountConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsAcm
 */

/*!
 * Constructs a PutAccountConfigurationResponsePrivate object with public implementation \a q.
 */
PutAccountConfigurationResponsePrivate::PutAccountConfigurationResponsePrivate(
    PutAccountConfigurationResponse * const q) : AcmResponsePrivate(q)
{

}

/*!
 * Parses a Acm PutAccountConfiguration response element from \a xml.
 */
void PutAccountConfigurationResponsePrivate::parsePutAccountConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutAccountConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Acm
} // namespace QtAws

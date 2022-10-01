// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecampaignresponse.h"
#include "describecampaignresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DescribeCampaignResponse
 * \brief The DescribeCampaignResponse class provides an interace for Personalize DescribeCampaign responses.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::describeCampaign
 */

/*!
 * Constructs a DescribeCampaignResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeCampaignResponse::DescribeCampaignResponse(
        const DescribeCampaignRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PersonalizeResponse(new DescribeCampaignResponsePrivate(this), parent)
{
    setRequest(new DescribeCampaignRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeCampaignRequest * DescribeCampaignResponse::request() const
{
    Q_D(const DescribeCampaignResponse);
    return static_cast<const DescribeCampaignRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Personalize DescribeCampaign \a response.
 */
void DescribeCampaignResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeCampaignResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Personalize::DescribeCampaignResponsePrivate
 * \brief The DescribeCampaignResponsePrivate class provides private implementation for DescribeCampaignResponse.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DescribeCampaignResponsePrivate object with public implementation \a q.
 */
DescribeCampaignResponsePrivate::DescribeCampaignResponsePrivate(
    DescribeCampaignResponse * const q) : PersonalizeResponsePrivate(q)
{

}

/*!
 * Parses a Personalize DescribeCampaign response element from \a xml.
 */
void DescribeCampaignResponsePrivate::parseDescribeCampaignResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCampaignResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Personalize
} // namespace QtAws

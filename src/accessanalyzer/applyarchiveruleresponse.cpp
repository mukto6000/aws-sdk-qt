/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "applyarchiveruleresponse.h"
#include "applyarchiveruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AccessAnalyzer {

/*!
 * \class QtAws::AccessAnalyzer::ApplyArchiveRuleResponse
 * \brief The ApplyArchiveRuleResponse class provides an interace for AccessAnalyzer ApplyArchiveRule responses.
 *
 * \inmodule QtAwsAccessAnalyzer
 *
 *  AWS IAM Access Analyzer helps identify potential resource-access risks by enabling you to identify any policies that
 *  grant access to an external principal. It does this by using logic-based reasoning to analyze resource-based policies in
 *  your AWS environment. An external principal can be another AWS account, a root user, an IAM user or role, a federated
 *  user, an AWS service, or an anonymous user. You can also use Access Analyzer to preview and validate public and
 *  cross-account access to your resources before deploying permissions changes. This guide describes the AWS IAM Access
 *  Analyzer operations that you can call programmatically. For general information about Access Analyzer, see <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/what-is-access-analyzer.html">AWS IAM Access Analyzer</a> in the
 *  <b>IAM User
 * 
 *  Guide</b>>
 * 
 *  To start using Access Analyzer, you first need to create an
 *
 * \sa AccessAnalyzerClient::applyArchiveRule
 */

/*!
 * Constructs a ApplyArchiveRuleResponse object for \a reply to \a request, with parent \a parent.
 */
ApplyArchiveRuleResponse::ApplyArchiveRuleResponse(
        const ApplyArchiveRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AccessAnalyzerResponse(new ApplyArchiveRuleResponsePrivate(this), parent)
{
    setRequest(new ApplyArchiveRuleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ApplyArchiveRuleRequest * ApplyArchiveRuleResponse::request() const
{
    return static_cast<const ApplyArchiveRuleRequest *>(AccessAnalyzerResponse::request());
}

/*!
 * \reimp
 * Parses a successful AccessAnalyzer ApplyArchiveRule \a response.
 */
void ApplyArchiveRuleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ApplyArchiveRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AccessAnalyzer::ApplyArchiveRuleResponsePrivate
 * \brief The ApplyArchiveRuleResponsePrivate class provides private implementation for ApplyArchiveRuleResponse.
 * \internal
 *
 * \inmodule QtAwsAccessAnalyzer
 */

/*!
 * Constructs a ApplyArchiveRuleResponsePrivate object with public implementation \a q.
 */
ApplyArchiveRuleResponsePrivate::ApplyArchiveRuleResponsePrivate(
    ApplyArchiveRuleResponse * const q) : AccessAnalyzerResponsePrivate(q)
{

}

/*!
 * Parses a AccessAnalyzer ApplyArchiveRule response element from \a xml.
 */
void ApplyArchiveRuleResponsePrivate::parseApplyArchiveRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ApplyArchiveRuleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AccessAnalyzer
} // namespace QtAws
